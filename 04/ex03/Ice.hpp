/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:34:00 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 15:48:50 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	~Ice();

	Ice	&operator=(const Ice &other);

	Ice		*clone() const;
	void	use(ICharacter &target);
};

#endif
