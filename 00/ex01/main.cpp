/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:10:55 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 11:23:06 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
//#include <cstdlib>

int	main()
{
	PhoneBook	book;
	std::string	command;

	while (42)
	{
		std::cout << "\nIntroduce a command (add, search or exit):\n";
		std::cin >> command;
		std::cin.ignore(256, '\n');
		if (command == "add" || command == "ADD")
			book.add_contact();
		else if (command == "search" || command == "SEARCH")
			book.search_contact();
		else if (command == "exit" || command == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Try again\n";
	}
	//system("leaks phonebook");
}
