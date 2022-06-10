/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:53:59 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 17:12:33 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define MAX_INV 4

class Character: public ICharacter
{
private:
	std::string	name;
	AMateria	*inventory[MAX_INV];
	int			n_materias;

public:
	Character();
	Character(std::string name);
	Character(const Character &other);
	~Character();

	Character	&operator=(const Character &other);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
