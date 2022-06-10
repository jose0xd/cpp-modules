/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:51:57 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 17:51:48 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->n_maters; i++)
		delete this->maters[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	(void)other;
	return (*this);
}

void 	MateriaSource::learnMateria(AMateria *m)
{
	if (this->n_maters >= MAX_MATER)
	{
		delete m;
		return ; // don't do anything
	}
	this->maters[this->n_maters] = m;
	this->n_maters++;
}

AMateria 	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->n_maters; i++)
	{
		if (this->maters[i]->getType() == type)
			return (this->maters[i]->clone());
	}
	return (0);
}
