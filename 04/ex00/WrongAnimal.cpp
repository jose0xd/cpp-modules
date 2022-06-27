/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:19:45 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 13:12:14 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor\n";
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment operator\n";
	this->type = other.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	if (this->type == "WrongDog")
		std::cout << "I'm a wrong dog\n";
	else if (this->type == "WrongCat")
		std::cout << "I'am a wrong cat\n";
}
