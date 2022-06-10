/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:46:21 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 11:38:59 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->brain = new Brain();
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal::~Animal()
{
	delete this->brain;
}

Animal	&Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}
