/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:41:22 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:19:49 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
	Brain		*brain;

public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	Animal		&operator=(const Animal &other);
	std::string	getType() const;

	void		makeSound() const;
	std::string	get_idea(int index);
	void		set_idea(int index, std::string str);
};

#endif
