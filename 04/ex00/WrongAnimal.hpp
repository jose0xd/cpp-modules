/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:14:44 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 12:57:50 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	WrongAnimal		&operator=(const WrongAnimal &other);
	std::string	getType() const;

	void	makeSound() const;
};

#endif
