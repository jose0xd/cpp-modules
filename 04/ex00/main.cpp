/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:34:25 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 15:40:02 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <cstdlib>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	w = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	std::cout << "\nSounds:\n";
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	w->makeSound();

	std::cout << "\nCopy constructor and assignment operator:\n";
	Animal cpy = *j;
	cpy.makeSound();
	Dog cpy2(*j);
	cpy2.makeSound();
	cpy2 = *i;        // Trying to assigned Cat to Dog doesn't work, so
	cpy2.makeSound(); // it doesn't make any sound
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete w;

	//system("leaks main");
	return (0);
}
