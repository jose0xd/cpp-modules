/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:30:51 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/21 12:48:25 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string key, int value)
	: key(key), value(value)
{
}

Data::Data(const Data &other)
	: key(other.key), value(other.value)
{
}

Data::~Data()
{
}

Data	&Data::operator=(const Data &other)
{
	this->key = other.key;
	this->value = other.value;
	return (*this);
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
