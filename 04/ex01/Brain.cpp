/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:26:59 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:33:32 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor\n";
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor\n";
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignment operator\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string	Brain::get_idea(int index)
{
	return (ideas[index]);
}

void	Brain::set_idea(int index, std::string str)
{
	this->ideas[index] = str;
}
