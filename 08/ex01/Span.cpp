/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:11:46 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/22 22:14:24 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
	: len(n)
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span()
{
}

const char	*Span::InsufficientItems::what() const throw()
{
	return ("Insufficient items");
}

Span	&Span::operator=(const Span &other)
{
	this->len = other.len;
	//this->data.clear(); // ??
	this->data = other.data;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (data.size() >= len)
		throw Span::InsufficientItems();
	data.insert(num);
}

int		Span::shortestSpan()
{
	if (data.size() <= 1)
		throw Span::InsufficientItems();
	std::multiset<int>::iterator iter = data.begin();
	std::multiset<int>::iterator next = ++data.begin();
	int minimum = *next - *iter;
	while (next != data.end())
	{
		int gap = *next - *iter;
		if (gap < minimum)
			minimum = gap;
		next++;
		iter++;
	}
	return (minimum);
}

int		Span::longestSpan()
{
	if (data.size() <= 1)
		throw Span::InsufficientItems();
	int maximum = *std::max_element(data.begin(), data.end());
	int minimum = *std::min_element(data.begin(), data.end());
	return (maximum - minimum);
}
