/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:12:32 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/22 16:45:39 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	int	array[] = { 2, 3, 5, 7, 11, 13 };
	std::vector<int> numbs(array, array + 6);
	std::vector<int>::iterator n;

	n = easyfind(numbs, 5);
	std::cout << "Element: " << *n << "\n";

	n = easyfind(numbs, 6);
	if (n != numbs.end())
		std::cout << "Element: " << *n << "\n";
	else
		std::cout << "Element not found\n";
	/*
	try {
		n = easyfind(numbs, 6);
		std::cout << "Element: " << *n << "\n";
	} catch (std::exception &e) {
		std::cout << e.what() << "\n";
	}
	*/
}
