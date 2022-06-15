/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:10:59 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/15 18:45:37 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::string	Intern::form_types[] = {
	"Presidential Pardon",
	"Robotomy Request",
	"Shrubbery Creation",
	""
};

Form	*(*Intern::cloner[])(std::string) = {
	PresidentialPardonForm::clone,
	RobotomyRequestForm::clone,
	ShrubberyCreationForm::clone
};

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; !form_types[i].empty(); i++)
	{
		if (name == form_types[i])
		{
			std::cout << "Intern creates " << name << "\n";
			return (cloner[i](target));
		}
	}
	std::cerr << "The form " << name << " doesn't exist\n";
	return (0);
}
