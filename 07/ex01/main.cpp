/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:05:12 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/21 16:16:16 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void	cube(int &n)
{
	n = n * n * n;
}

template <typename T>
void	print(T &n)
{
	std::cout << n << " ";
}

int	main()
{
	int	nums[7] = { 2, 3, 5, 7, 11, 13, 17 };

	std::cout << "int nums[7] before iter:\n";
	for (int i = 0; i < 7; i++)
		std::cout << nums[i] << " ";
	std::cout << "\n";
	
	iter(nums, 7, cube);
	std::cout << "int nums[7] after iter:\n";
	for (int i = 0; i < 7; i++)
		std::cout << nums[i] << " ";
	std::cout << "\n";

	std::cout << "\nUsing a instantiated function template on nums\n";
	iter(nums, 7, print);
	std::cout << "\nEND\n";

	std::cout << "\nUsing a instantiated function template on strs\n";
	std::string strs[4] = { "one", "two", "three", "four" };
	iter(strs, 4, print);
	std::cout << "\nEND\n";
}
