/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:32:16 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/22 22:25:40 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <exception>
# include <set>

class Span
{
private:
	unsigned int		len;
	std::multiset<int>	data;

	Span();

public:
	Span(unsigned int n);
	Span(const Span &other);
	virtual ~Span();

	class InsufficientItems: public std::exception
	{
		virtual const char *what() const throw();
	};

	Span	&operator=(const Span &other);

	template <typename InputIt>
	void	addNumber(InputIt first, InputIt last)
	{
		if (data.size() + std::distance(first, last) > len)
			throw Span::InsufficientItems();
		data.insert(first, last);
	}
	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
};

#endif
