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
