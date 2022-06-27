/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:22:09 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 15:29:57 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat(const WrongAnimal &other);
	~WrongCat();

	WrongCat	&operator=(const WrongCat &other);
	WrongCat	&operator=(const WrongAnimal &other);
};

#endif
