/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:33:09 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 10:53:44 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << " -Default constructor of ScavTrap called\n";
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << " -Constructor of ScavTrap called\n";
	this->name = name;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	(void)other;
	std::cout << " -Copy constructor of ScavTrap called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << " -Destructor of ScavTrap called\n";
}

void		ScavTrap::attack(const std::string &target)
{
	ClapTrap::attack(target);
	std::cout << " -attack form ScavTrap\n";
}

void		ScavTrap::guardGate()
{
	std::cout << " -ScavTrap is now in Gate keeper mode\n";
}
