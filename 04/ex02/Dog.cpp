/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:50:03 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 11:38:28 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog::~Dog()
{
}

void	Dog::makeSound() const
{
	std::cout << "Woof, woof\n";
}
