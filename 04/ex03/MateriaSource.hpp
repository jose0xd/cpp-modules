/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:47:10 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 17:23:05 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define MAX_MATER 4

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*maters[MAX_MATER];
	int			n_maters;

public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	virtual ~MateriaSource();

	MateriaSource	&operator=(const MateriaSource &other);

	void 		learnMateria(AMateria *);
	AMateria 	*createMateria(std::string const &type);
};

#endif
