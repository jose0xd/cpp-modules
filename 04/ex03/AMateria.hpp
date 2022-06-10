/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:17:50 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 17:17:19 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;  //?

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &other);
	virtual ~AMateria();

	AMateria	&operator=(const AMateria &other);

	std::string const &getType() const; //Returns the materia type

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
