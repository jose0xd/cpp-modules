/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:48:35 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 15:20:34 by jarredon         ###   ########.fr       */
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
};

#endif
