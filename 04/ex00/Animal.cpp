/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:46:21 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 13:12:26 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor\n";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor\n";
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor\n";
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator\n";
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
