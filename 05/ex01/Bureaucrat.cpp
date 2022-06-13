/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:12:54 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/13 16:22:33 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException: public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Exception: Grade is too high.\n");
	}
};

class Bureaucrat::GradeTooLowException: public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Exception: Grade is too low.\n");
	}
};

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: name(other.name), grade(other.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	(void)other;
	return (*this);
}

std::string	Bureaucrat::getName() const { return (this->name); }
int	Bureaucrat::getGrade() const { return (this->grade); }

void	Bureaucrat::increment()
{
	if (grade <= 1)
		throw GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrement()
{
	if (grade >= 150)
		throw GradeTooLowException();
	else
		this->grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't signed " << form.getName()
			<< " because " << e.what();
	}
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (out);
}
