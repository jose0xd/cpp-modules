#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	last = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::make_room(void)
{
	for (int i = 0; i < MAX_STORE - 1; i++)
		contacts[i] = contacts[i + 1];
	last = MAX_STORE - 1;
}

void	PhoneBook::add_contact(void)
{
	if (last >= MAX_STORE)
		PhoneBook::make_room();
	contacts[last].fill_fields();
	last++;
}

void	PhoneBook::search_contact(void)
{
	int	i;

	std::cout << "\n|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|\n---------------------------------------------\n";
	for (i = 0; i < last; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		contacts[i].print_full_name();
	}
	std::cout << "\nIntroduce index of entry to display: ";
	std::cin >> i;
	if (i < 0 || i >= last)
	{
		std::cout << "Invalid index\n";
		return ;
	}
	contacts[i].print_all();
}