/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:34:25 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 11:42:09 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <cstdlib>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const WrongAnimal*	w = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	w->makeSound();

	delete j;
	delete i;
	delete w;

	//system("leaks main");
	return (0);
}
