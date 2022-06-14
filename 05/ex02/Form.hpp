/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:21:12 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/14 08:08:50 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <stdexcept>
# include <string>
# include <iostream>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int			grade_to_sign;
	const int			grade_to_execute;

public:
	Form();
	Form(const std::string name, int grade_to_sign, int grade_to_execute);
	Form(const Form &other);
	virtual ~Form();

	Form	&operator=(const Form &other);

	std::string		getName() const;
	bool			getIsSigned() const;
	int				getGradeSign() const;
	int				getGradeExec() const;

	void			beSigned(Bureaucrat &bcrat);
	virtual void	execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException: public std::exception
	{
		virtual const char	*what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		virtual const char	*what() const throw();
	};
	class NotSignedException: public std::exception
	{
		virtual const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, const Form &obj);

#endif
