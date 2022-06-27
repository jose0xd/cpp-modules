/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:41:22 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:40:08 by jarredon         ###   ########.fr       */
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

	Animal			&operator=(const Animal &other);
	std::string		getType() const;

	virtual void	makeSound() const = 0;
	std::string		get_idea(int index);
	void			set_idea(int index, std::string str);
};

#endif

/*
 * A class is made abstract by declaring at least one of its functions as
 * pure virtual function. A pure virtual function is specified by
 * placing "= 0" in its declaration
 *
 * Virtual destructors are useful when you might potentially delete
 * an instance of a derived class through a pointer to base class
 */
