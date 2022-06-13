/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:47:50 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/13 18:10:12 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <string>
# include <iostream>
class Form;
# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	virtual ~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &other);

	std::string	getName() const;
	int			getGrade() const;

	void		increment();
	void		decrement();
	void		signForm(Form &form);
	void		executeForm(Form const &form);

	class GradeTooHighException;
	class GradeTooLowException;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
