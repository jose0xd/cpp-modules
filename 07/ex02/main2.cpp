/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:41:09 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/21 17:43:54 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>
//#include <cstdlib>

int	main()
{
	Array<int> array(7);
	array[2] = 42;
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << "\n";

	Array<std::string> tab(3);
	tab[1] = "perita";
	for (unsigned int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << " ";
	std::cout << "|\n";

	//std::system("leaks main");
}
