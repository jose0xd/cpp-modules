/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:11:02 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 20:39:37 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Contact	tmp;

	if (tmp.fill_fields())
		return ;
	if (last >= MAX_STORE)
		PhoneBook::make_room();
	contacts[last] = tmp;
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
	if (std::cin.fail() || i < 0 || i >= last)
	{
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cout << "Invalid index\n";
		return ;
	}
	contacts[i].print_all();
}
