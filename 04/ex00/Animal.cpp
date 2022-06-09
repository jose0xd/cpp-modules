/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:46:21 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 22:07:05 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal::~Animal()
{
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

void	Animal::makeSound() const
{
	if (this->type == "Dog")
		std::cout << "Woof, woof\n";
	else if (this->type == "Cat")
		std::cout << "Meow, meow\n";
}
