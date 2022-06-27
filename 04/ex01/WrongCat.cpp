/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:21:44 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 15:32:12 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal()
{
	std::cout << "WrongCat default constructor\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
	: WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor\n";
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor\n";
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat assignment operator\n";
	this->type = other.type;
	return (*this);
}

WrongCat	&WrongCat::operator=(const WrongAnimal &other)
{
	std::cout << "WrongCat assignment operator\n";
	if (other.getType() == "WrongCat")
		this->type = other.getType();
	else
		this->type = "";
	return (*this);
}
