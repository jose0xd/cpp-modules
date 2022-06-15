/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:50:24 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/15 12:30:58 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	static std::string	form_types[];
	static Form	*(*cloner[])(std::string);

public:
	Intern();
	Intern(const Intern &other);
	virtual ~Intern();

	Intern	&operator=(const Intern &other);

	Form	*makeForm(std::string name, std::string target);
};

#endif
