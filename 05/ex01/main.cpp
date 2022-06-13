/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:37:33 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/13 16:23:09 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try {
		Bureaucrat one("Paco", 155);
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	Bureaucrat two("Fran", 1);
	std::cout << two;

	std::cout << "Trying to increment 'Fran'\n";
	try {
		two.increment();
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	std::cout << "Trying to decrement 'Fran'\n";
	two.decrement();
	std::cout << two;

	std::cout << "\nFORM\n";
	try {
		Form f1("28C", 155, 50);
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	Form f2("28B", 1, 50);
	std::cout << f2;

	std::cout << "Trying to sign '28B'\n";
	two.signForm(f2);
	std::cout << "Increment grade and trying again\n";
	two.increment();
	two.signForm(f2);
	std::cout << f2;
}
