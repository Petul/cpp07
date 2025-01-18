/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:14:56 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 10:45:17 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void print_val(T& val)
{
	std::cout << val;
}

template <typename T>
void iter(T* arr, int len, void (*f)(T&))
{
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}
