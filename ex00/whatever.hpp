/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:00:26 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 10:11:14 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T& a, T& b)
{
	T tmp{a};
	a = b;
	b = tmp;
}

template <typename T>
T& min(T& a, T& b)
{
	if (a == b) return (b);
	return a < b ? a : b;
}

template <typename T>
T& max(T& a, T& b)
{
	if (a == b) return (b);
	return a > b ? a : b;
}
