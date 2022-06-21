/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:09:59 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/21 15:24:10 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int choice = std::rand() % 3;

	switch (choice)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (0);
}

void	identify(Base *p)
{
	std::cout << "identify from pointer: ";
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cout << "unknow type\n";
}

void	identify(Base &p)
{
	Base obj;

	std::cout << "identify from reference: ";
	try {
		obj = dynamic_cast<A &>(p);
		std::cout << "A\n";
		return ;
	} catch (std::bad_cast &e) {}
	try {
		obj = dynamic_cast<B &>(p);
		std::cout << "B\n";
		return ;
	} catch (std::bad_cast &e) {}
	try {
		obj = dynamic_cast<C &>(p);
		std::cout << "C\n";
		return ;
	} catch (std::bad_cast &e) {}
}

int	main()
{
	Base *obj;

	std::srand(std::time(0));
	for (int i = 0; i < 5; i++)
	{
		obj = generate();
		identify(obj);
		identify(*obj);
		delete obj;
	}
}
