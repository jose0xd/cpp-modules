/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:47:40 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/28 00:49:56 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iostream>
//# include <iterator>

class NotFound: public std::exception
{
	virtual const char *what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T &conta, int n)
{
	typename T::iterator ite = std::find(conta.begin(), conta.end(), n);
	// Throw an exception
	//if (ite == conta.end())
		//throw NotFound();

	return (ite);
}

# include "easyfind.tpp"

#endif
