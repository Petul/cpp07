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

#include <iostream>
#include <string>

#include "Array.hpp"

int main(void)
{
	{
		Array<int> a;
		std::cout << a.size() << std::endl;
		return (0);
	}
	{
		Array<int> a(5);
		std::cout << a.size() << std::endl;
		std::cout << a[0] << std::endl;
		return (0);
	}
	{
		Array<std::string> a(5);
		std::cout << a.size() << std::endl;
		std::cout << a[0] << std::endl;
		return (0);
	}
}
