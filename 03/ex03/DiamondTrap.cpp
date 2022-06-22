/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:06:40 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/22 15:38:32 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: hit_pts(FragTrap::hit_pts),
	energy_pts(ScavTrap::energy_pts), attack_damage(FragTrap::attack_damage)
{
	std::cout << "   ^Default constructor of DiamondTrap called\n";
}

DiamondTrap::DiamondTrap(std::string name)
	: FragTrap(name), ScavTrap(name), hit_pts(FragTrap::hit_pts),
	energy_pts(ScavTrap::energy_pts), attack_damage(FragTrap::attack_damage)
{
	std::cout << "   ^Constructor of DiamondTrap called\n";
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	//this->hit_pts = FragTrap::hit_pts;
	//this->energy_pts = ScavTrap::energy_pts;
	//this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: hit_pts(FragTrap::hit_pts),
	energy_pts(ScavTrap::energy_pts), attack_damage(FragTrap::attack_damage)
{
	(void)other;
	std::cout << "   ^Copy constructor of DiamondTrap called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "   ^Destructor of DiamondTrap called\n";
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	std::cout << "   ^attack form DiamondTrap\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->name << ", and my ClapTrap name is "
		<< this->ClapTrap::name << "\n";
}

void	DiamondTrap::print()
{
	std::cout << "ClapTrap " << this->name << ":"
		<< "\n Hit points: " << this->hit_pts
		<< "\n Energy points: " << this->energy_pts
		<< "\n Attack damage: " << this->attack_damage << "\n";
}
