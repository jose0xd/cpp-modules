/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:54:15 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 18:50:24 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <cstdlib>

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria* tmp2;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(3);
	me->unequip(1); // Si unequip primero 0 y luego 1 y delete tmp's y delete me: mal
	me->unequip(0);
	delete tmp;
	delete tmp2;

	delete bob;
	delete me;
	delete src;

	//system("leaks main");
	return (0);
}
