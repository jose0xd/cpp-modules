/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:23:27 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/14 08:27:36 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception (Form): Grade is too high.\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception (Form): Grade is too low.\n");
}

const char *Form::NotSignedException::what() const throw()
{
	return ("Exception (Form): Not signed yet.\n");
}

Form::Form()
	: is_signed(false), grade_to_sign(0), grade_to_execute(0)
{
}

Form::Form(const std::string name, int grade_to_sign, int grade_to_execute)
	: name(name), grade_to_sign(grade_to_sign),
	grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		throw GradeTooLowException();
	this->is_signed = false;
}

Form::Form(const Form &other)
	: name(other.name), is_signed(other.is_signed),
	grade_to_sign(other.grade_to_sign),
	grade_to_execute(other.grade_to_execute)
{
}

Form::~Form()
{
}

Form	&Form::operator=(const Form &other)
{
	(void)other;
	return (*this);
}

std::string	Form::getName() const { return (name); }
bool		Form::getIsSigned() const { return (is_signed); }
int			Form::getGradeSign() const { return (grade_to_sign); }
int			Form::getGradeExec() const { return (grade_to_execute); }

void		Form::beSigned(Bureaucrat &bcrat)
{
	if (bcrat.getGrade() > this->grade_to_sign)
		throw GradeTooLowException();
	else
		this->is_signed = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!this->is_signed)
		throw Form::NotSignedException();
	else if (executor.getGrade() > this->grade_to_execute)
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	out << " Form name: " << obj.getName()
		<< "\n Is it signed? " << obj.getIsSigned()
		<< "\n Grade to sign: " << obj.getGradeSign()
		<< "\n Grade to execute: " << obj.getGradeExec() << "\n";
	return (out);
}
