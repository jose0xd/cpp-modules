/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:54:31 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:45:15 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	Cat(const Animal &other);
	~Cat();

	Cat	&operator=(const Cat &other);
	Cat	&operator=(const Animal &other);

	void	makeSound() const;
};

#endif
