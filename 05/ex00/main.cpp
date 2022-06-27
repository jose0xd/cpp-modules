/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:37:33 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 20:58:25 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	std::cout << "Trying to get range 155\n";
	try {
		Bureaucrat one("Paco", 155);
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	Bureaucrat two("Fran", 1);
	std::cout << two;

	std::cout << "Trying to increment 'Fran' (already range 1)\n";
	try {
		two.increment();
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	std::cout << "Trying to decrement 'Fran'\n";
	two.decrement();
	std::cout << two;
	std::cout << "Name: " << two.getName()
		<< "\nGrade: " << two.getGrade() << std::endl;
}
