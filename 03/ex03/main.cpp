/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:38:10 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 14:03:36 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap a("John");
	DiamondTrap b("Mike");

	std::cout << std::endl;
	a.guardGate();
	b.highFivesGuys();
	a.whoAmI();

	std::cout << std::endl;
	b.print();
	a.attack("Mike");
	b.takeDamage(a.get_attack_damage());
	b.beRepaired(1);
	b.print();

	for (int i = 0; i < 10; i++)
	{
		a.attack("Mike");
		b.takeDamage(a.get_attack_damage());
		b.beRepaired(1);
	}
	a.print();
	b.print();
}
