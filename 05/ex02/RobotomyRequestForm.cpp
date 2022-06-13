/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:42:12 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/13 19:50:44 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("Robotomy Request", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form(other), target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const
		RobotomyRequestForm &other)
{
	(void)other;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "Bip bop driiiing. Bzzzz ruuumbaaaa\n";
	std::srand(std::time(nullptr));
	if (std::rand() % 2)
		std::cout << this->target << " has been robotomized successfully\n";
	else
		std::cout << "The robotomy of "<< this->target << " failed\n";
}
