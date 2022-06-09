/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:38:10 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 11:19:18 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap a("One");
	FragTrap b("Two");

	a.guardGate();
	b.highFivesGuys();
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
