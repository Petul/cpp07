/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:24:05 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 10:45:19 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

template <typename T>
void print_val(T& val)
{
	std::cout << val;
}

int main(void)
{
	int int_arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string char_arr{"hello world"};

	iter(int_arr, 10, &print_val<int>);
	std::cout << "\n";
	iter(char_arr.c_str(), char_arr.length(), &print_val<const char>);
}
