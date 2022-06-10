/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:55:27 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 11:38:34 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat::~Cat()
{
}

void	Cat::makeSound() const
{
	std::cout << "Meow, meow\n";
}
