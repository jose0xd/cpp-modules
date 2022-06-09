/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:41:22 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 22:03:30 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const Animal &other);
	~Animal();

	Animal		&operator=(const Animal &other);
	std::string	getType() const;

	void	makeSound() const;
};

#endif
