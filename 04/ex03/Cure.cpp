/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:51:58 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 17:19:00 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure")
{
}

Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure::~Cure()
{
}

Cure	&Cure::operator=(const Cure &other)
{
	this->type = other.type;
	return (*this);
}

Cure	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
