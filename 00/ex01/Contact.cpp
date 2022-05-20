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

void	Contact::fill_fields(void)
{
	for (int i = 0; !titles[i].empty(); i++)
	{
		std::cout << "Enter: " << titles[i] << std::endl;
		std::getline(std::cin, fields[i]);
	}
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
	for (int i = 0; !titles[i].empty(); i++)
	{
		std::cout << titles[i] << ": " << fields[i] << "\n";
	}
}
