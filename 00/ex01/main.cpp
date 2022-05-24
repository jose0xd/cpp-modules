/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:10:55 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/24 13:10:57 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;
	std::string	command;

	while (42)
	{
		std::cout << "\nIntroduce a command (add, search or exit):\n";
		std::cin >> command;
		std::cin.ignore(256, '\n');
		if (command == "add")
			book.add_contact();
		else if (command == "search")
			book.search_contact();
		else if (command == "exit")
			break ;
		else
			std::cout << "Invalid command. Try again\n";
	}
}
