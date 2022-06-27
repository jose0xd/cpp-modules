/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:34:25 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 18:43:21 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <cstdlib>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define SIZE 12

int	main()
{
	int i;
	Animal	*farm[SIZE];

	for (i = 0; i < SIZE / 2; i++)
		farm[i] = new Dog();
	for (; i < SIZE; i++)
		farm[i] = new Cat();

	std::cout << std::endl;
	for (i = 0; i < SIZE; i++)
		std::cout << farm[i]->getType() << " " << std::endl;
	std::cout << "\nSounds:\n";
	for (i = 0; i < SIZE; i++)
		farm[i]->makeSound();
	std::cout << std::endl;

	farm[SIZE / 4]->set_idea(20, "I want food");
	Dog cpy = *farm[SIZE / 4];
	farm[3 * SIZE / 4]->set_idea(21, "Where is the food?");
	Cat *cpy2 = new Cat();
	*cpy2 = *farm[3 * SIZE / 4];
	std::cout << std::endl;

	for (i = 0; i < SIZE; i++)
		delete farm[i];

	std::cout << "\nCopies after deleting the originals:\n";
	cpy.makeSound();
	std::cout << cpy.get_idea(20) << std::endl;
	cpy2->makeSound();
	std::cout << cpy2->get_idea(21) << std::endl;
	std::cout << std::endl;
	delete cpy2;

	//system("leaks main");
	return (0);
}
