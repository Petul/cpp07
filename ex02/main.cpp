/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:22:17 by pleander          #+#    #+#             */
/*   Updated: 2025/01/20 12:26:02 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iomanip>
#include <iostream>
#include <string>

#include "Array.hpp"
#define HEADER(text)                                        \
	std::cout << std::setfill('=') << std::setw(40) << "\n" \
	          << text << "\n"                               \
	          << std::setw(40) << "\n";

int main(void)
{
	HEADER("Test empty int")
	{
		Array<int> a;
		std::cout << a.size() << std::endl;
	}
	HEADER("Test default int")
	{
		Array<int> a(5);
		std::cout << a.size() << std::endl;
		std::cout << a[0] << std::endl;
	}
	HEADER("Test empty string")
	{
		Array<std::string> a(5);
		std::cout << a.size() << std::endl;
		std::cout << a[0] << std::endl;
	}
	HEADER("Test out of bounds")
	{
		Array<int> a(5);
		std::cout << a.size() << std::endl;
		try
		{
			std::cout << a[5] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
