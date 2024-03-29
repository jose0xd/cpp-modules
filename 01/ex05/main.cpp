/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 08:35:42 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/28 20:23:04 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl	boy;

	std::cout << "Call DEBUG level:\n";
	boy.complain("DEBUG");
	std::cout << "\nCall INFO level:\n";
	boy.complain("INFO");
	std::cout << "\nCall WARNING level:\n";
	boy.complain("WARNING");
	std::cout << "\nCall ERROR Level:\n";
	boy.complain("ERROR");
	std::cout << "\nCall RANDOM level:\n";
	boy.complain("RANDOM");
}
