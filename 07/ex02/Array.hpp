/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:21:04 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/22 15:56:39 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <class T>
class Array
{
private:
	unsigned int	len;
	T				*list;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();

	class OutOfBound: public std::exception {
		virtual const char	*what() const throw();
	};

	Array			&operator=(const Array &other);
	T				&operator[](unsigned int i);
	const T			&operator[](unsigned int i) const;
	unsigned int	size() const;
};

# include "Array.tpp"

#endif
