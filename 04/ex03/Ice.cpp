/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:41:09 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 17:19:17 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice")
{
}

Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice::~Ice()
{
}

Ice	&Ice::operator=(const Ice &other)
{
	this->type = other.type;
	return (*this);
}

Ice		*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
