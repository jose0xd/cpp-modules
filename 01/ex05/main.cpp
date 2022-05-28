/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 08:35:42 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/28 09:03:26 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl	boy;

	std::cout << "Call debug level:\n";
	boy.complain("debug");
	std::cout << "\nCall debug level:\n";
	boy.complain("info");
	std::cout << "\nCall warning level:\n";
	boy.complain("info");
	std::cout << "\nCall error level:\n";
	boy.complain("info");
	std::cout << "\nCall random level:\n";
	boy.complain("random");
}
