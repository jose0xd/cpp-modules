/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:55:27 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 18:35:16 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal()
{
	std::cout << "Cat default constructor\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
	: Animal(other)
{
	std::cout << "Cat copy constructor\n";
	*this = other;
}

Cat::Cat(const Animal &other)
	: Animal(other)
{
	std::cout << "Cat copy constructor\n";
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor\n";
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator\n";
	this->type = other.type;
	return (*this);
}

Cat	&Cat::operator=(const Animal &other)
{
	std::cout << "Cat assignment operator base\n";
	if (other.getType() == "Cat")
		Animal::operator=(other);
	else
		this->type = "";
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow, meow\n";
}
