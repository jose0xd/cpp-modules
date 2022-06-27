/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:34:25 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:34:24 by jarredon         ###   ########.fr       */
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
	Animal cpy = *farm[SIZE / 4];

	for (i = 0; i < SIZE; i++)
		delete farm[i];

	std::cout << std::endl;
	cpy.makeSound();
	std::cout << cpy.get_idea(20) << std::endl;

	//system("leaks main");
	return (0);
}
