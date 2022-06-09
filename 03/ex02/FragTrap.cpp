/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:05:38 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 11:17:36 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "  *Default constructor of FragTrap called\n";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "  *Constructor of FragTrap called\n";
	this->name = name;
	this->hit_pts = 100;
	this->energy_pts = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	(void)other;
	std::cout << "  *Copy constructor of FragTrap called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "  *Destructor of FragTrap called\n";
}

void		FragTrap::attack(const std::string &target)
{
	ClapTrap::attack(target);
	std::cout << "  *attack form FragTrap\n";
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "  *FragTrap: gimme five ヘ( ^o^)ノ＼(^_^ )\n";
}
