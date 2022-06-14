/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:37:33 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/13 20:15:17 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
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
	catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << "Trying to decrement 'Fran'\n";
	two.decrement();
	std::cout << two;

	std::cout << "\nFORM\n";
	//ShrubberyCreationForm f1("target1");
	ShrubberyCreationForm f2("target2");
	std::cout << f2;

	std::cout << "Trying to sign 'f2'\n";
	two.signForm(f2);
	std::cout << "Increment grade and trying again\n";
	two.increment();
	two.signForm(f2);
	std::cout << f2;
	two.executeForm(f2);

	RobotomyRequestForm robot("Machine");
	std::cout << "\n**Trying to execute a form unsigned\n";
	//try {
		two.executeForm(robot);
	//} catch (std::exception &e) {
		//std::cout << e.what();
	//}
	two.signForm(robot);
	two.executeForm(robot);

	PresidentialPardonForm mike("Mike");
	two.signForm(mike);
	two.executeForm(mike);
}
