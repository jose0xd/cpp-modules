/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:46:21 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 23:31:38 by jarredon         ###   ########.fr       */
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

void	Animal::makeSound() const
{
	if (this->type == "Dog")
		std::cout << "Woof, woof\n";
	else if (this->type == "Cat")
		std::cout << "Meow, meow\n";
}
