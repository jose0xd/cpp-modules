/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:15:03 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/23 01:02:07 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack<T> &other);
	virtual ~MutantStack();

	MutantStack<T>	&operator=(const MutantStack<T> &other);

	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator begin();
	iterator end();
};

# include "MutantStack.tpp"

#endif
