/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:49:53 by pleander          #+#    #+#             */
/*   Updated: 2025/01/20 12:25:51 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <stdexcept>

template <typename T>
class Array
{
   public:
	Array() : size_{0}
	{
		this->array_ = new T[0];
	}

	Array(int n) : size_{n}
	{
		this->array_ = new T[n];
		for (int i = 0; i < n; i++)
		{
			this->array_[i] = T();
		}
	}

	Array(const Array& o) : size_{o.size_}
	{
		this->array_ = new T[o.size_];
		for (int i = 0; i < o.size_; i++)
		{
			this->array_[i] = T();
		}
	}

	Array& operator=(const Array& o)
	{
		if (this == &o)
		{
			return (*this);
		}
		delete[] this->array_;
		this->array_ = new T*[o.size_];
		for (int i = 0; i < o.size_; i++)
		{
			this->array_[i] = o.array_[i];
		}
		this->size_ = o.size_;
		return (*this);
	}

	~Array()
	{
		delete[] this->array_;
	}

	T& operator[](int i)
	{
		if (i < 0 || i >= this->size_)
		{
			throw(std::runtime_error{"Error: index out of range"});
		}
		return (array_[i]);
	}

	int size()
	{
		return (this->size_);
	}

   private:
	int size_;
	T* array_;
};
