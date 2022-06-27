/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:50:03 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:33:55 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	std::cout << "Dog default constructor\n";
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
	: Animal(other)
{
	std::cout << "Dog copy constructor\n";
	*this = other;
}

Dog::Dog(const Animal &other)
	: Animal(other)
{
	std::cout << "Dog copy constructor\n";
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor\n";
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator\n";
	this->type = other.type;
	return (*this);
}

Dog	&Dog::operator=(const Animal &other)
{
	std::cout << "Dog assignment operator\n";
	if (other.getType() == "Dog")
	{
		this->type = other.getType();
		this->brain = new Brain;
		*this->brain = *static_cast<Dog>(other).brain;
	}
	else
		this->type = "";
	return (*this);
}
