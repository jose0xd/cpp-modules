/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:38:10 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 00:56:59 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a = ClapTrap("One");
	ClapTrap b = ClapTrap("Two");

	a.attack("Two");
	b.takeDamage(a.get_attack_damage());
	b.beRepaired(1);
	b.print();
	for (int i = 0; i < 10; i++)
	{
		a.attack("Two");
		b.beRepaired(1);
	}
	a.print();
	b.print();
}
