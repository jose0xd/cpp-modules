/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:46:21 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:29:02 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor\n";
	this->brain = new Brain();
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor\n";
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor\n";
	delete this->brain;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator\n";
	this->type = other.type;
	this->brain = new Brain;
	*this->brain = *other.brain;
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

std::string	Animal::get_idea(int index)
{
	return (brain->get_idea(index));
}

void	Animal::set_idea(int index, std::string str)
{
	brain->set_idea(index, str);
}
