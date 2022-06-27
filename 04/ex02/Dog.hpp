/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:48:35 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 17:49:16 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog &other);
	Dog(const Animal &other);
	~Dog();

	Dog	&operator=(const Dog &other);
	Dog	&operator=(const Animal &other);

	void	makeSound() const;
};

#endif
