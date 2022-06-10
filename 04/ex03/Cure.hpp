/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:50:59 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/10 15:51:47 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(const Cure &other);
	~Cure();

	Cure	&operator=(const Cure &other);

	Cure	*clone() const;
	void	use(ICharacter &target);
};

#endif
