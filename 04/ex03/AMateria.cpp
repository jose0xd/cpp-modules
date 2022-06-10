/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:31:03 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 17:35:51 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	(void)other;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &other)
{
	(void)other;
}
