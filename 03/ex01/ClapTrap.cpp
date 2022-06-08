/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:08:31 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 00:53:12 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called\n";
	this->name = name;
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called\n";
	this->name = other.name;
	this->hit_pts = other.hit_pts;
	this->energy_pts = other.energy_pts;
	this->attack_damage = other.attack_damage;
	return (*this);
}

std::string	ClapTrap::get_name() { return this->name; }
int			ClapTrap::get_hit_pts() { return this->hit_pts; }
int			ClapTrap::get_energy_pts() { return this->energy_pts; }
int			ClapTrap::get_attack_damage() { return this->attack_damage; }

void		ClapTrap::print()
{
	std::cout << "ClapTrap " << this->name << ":"
		<< "\n Hit points: " << this->hit_pts
		<< "\n Energy points: " << this->energy_pts
		<< "\n Attack damage: " << this->attack_damage << "\n";
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_pts > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target
			<< ", causing " << this->attack_damage << " points of damage!\n";
		this->energy_pts--;
	}
	else
	{
		std::cout << "ClapTrap " << this->name
			<< " hasn't enough energy points\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " receive " << amount
		<< " points of damage!\n";
	this->hit_pts -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_pts > 0)
	{
		std::cout << "ClapTrap " << this->name << " repairs itself in "
			<< amount << " points!\n";
		this->energy_pts--;
		this->hit_pts += amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name
			<< " hasn't enough energy points\n";
	}
}
