/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:47:40 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/22 01:49:05 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
//# include <iterator>

template <typename T>
typename T::iterator	&easyfind(T &conta, int n)
{
	return (std::find(conta.begin(), conta.end(), n));
}

#endif
