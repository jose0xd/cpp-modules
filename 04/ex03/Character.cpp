/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:15:41 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 18:28:09 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

Character::Character()
{
}

Character::Character(std::string name)
{
	this->name = name;
	this->n_materias = 0;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < this->n_materias; i++)
		delete this->inventory[i];
}

Character	&Character::operator=(const Character &other)
{
	for (int i = 0; i < this->n_materias; i++)
		delete this->inventory[i];

	this->name = other.name;
	this->n_materias = other.n_materias;
	for (int i = 0; i < this->n_materias; i++)
		this->inventory[i] = other.inventory[i];
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (this->n_materias >= MAX_INV)
		return ; // don't do anything
	this->inventory[this->n_materias] = m;
	this->n_materias++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || this->n_materias <= idx)
		return ; // don't do anything
	for (int i = idx; i < this->n_materias - 1; i++)
		this->inventory[i] = this->inventory[i + 1];
	this->inventory[this->n_materias - 1] = 0;
	this->n_materias--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || this->n_materias <= idx)
		return ; // don't do anything
	this->inventory[idx]->use(target);
}
