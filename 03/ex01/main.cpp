/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:38:10 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 10:56:03 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("One");
	ScavTrap b("Two");
	ScavTrap c;
	c = a;

	a.guardGate();
	a.attack("Two");
	b.takeDamage(a.get_attack_damage());
	b.beRepaired(1);
	b.print();
	for (int i = 0; i < 10; i++)
	{
		a.attack("Two");
		b.takeDamage(a.get_attack_damage());
		b.beRepaired(1);
	}
	a.print();
	b.print();
}
