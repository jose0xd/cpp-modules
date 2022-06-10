/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:10:40 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 11:18:05 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::titles[6] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret",
	""
};

Contact::Contact()
{
}

Contact::~Contact()
{
}

static std::string	trim(std::string str)
{
	size_t	start = str.find_first_not_of(" \t");
	size_t	end = str.find_last_not_of(" \t");
	if (start == std::string::npos || end == std::string::npos)
		return ("");
	return (str.substr(start, end + 1 - start));
}

int	Contact::fill_fields(void)
{
	std::string	tmp[5];

	for (int i = 0; !titles[i].empty(); i++)
	{
		std::cout << titles[i] << ": ";
		std::getline(std::cin, tmp[i]);
		tmp[i] = trim(tmp[i]);
		if (tmp[i].empty())
		{
			std::cout << "A saved contact can't have empty fields\n";
			return (-1);
		}
	}
	for (int i = 0; !titles[i].empty(); i++)
		fields[i] = tmp[i];
	return (0);
}

void	Contact::print_full_name(void)
{
	for (int i = 0; i < 3; i++)
	{
		if (fields[i].length() > 10)
			std::cout << "|" << fields[i].substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << fields[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::print_all(void)
{
	std::cout << "\nCONTACT INFORMATION:\n";
	for (int i = 0; !titles[i].empty(); i++)
	{
		std::cout << titles[i] << ": " << fields[i] << "\n";
	}
}
