/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:09:07 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:10 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int	main()
{
	Data		thing("size", 42);
	uintptr_t	num;
	Data		*ptr;

	num = serialize(&thing);
	ptr = deserialize(num);

	std::cout << "serialize:        " << num << "\n";
	std::cout << "deserialize:      " << ptr << "\n";
	std::cout << "original pointer: " << &thing << "\n";
}
