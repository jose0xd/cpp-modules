/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:33:09 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 01:35:45 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name)
{

}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
}

void		ScavTrap::attack(const std::string &target);
void		ScavTrap::guardGate();
