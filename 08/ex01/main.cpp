/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:50:18 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/22 22:32:34 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		sp.addNumber(42);
	} catch (std::exception &e) {
		std::cout << "Trying to add 42: "<< e.what() << std::endl;
	}

	int	array[8] = { 2, 3, 5, 7, 9, 11, 13, 17 };
	Span prime(8);
	prime.addNumber(array, array + 8);
	std::cout << prime.shortestSpan() << std::endl;
	std::cout << prime.longestSpan() << std::endl;

	try {
		Span prime(3);
		prime.addNumber(array + 2, array + 7);
	} catch (std::exception &e) {
		std::cout << "Trying to add big range: "<< e.what() << std::endl;
	}

	return (0);
}
