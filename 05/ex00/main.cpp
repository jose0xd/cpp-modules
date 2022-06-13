/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:37:33 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/13 13:08:37 by jarredon         ###   ########.fr       */
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
}
