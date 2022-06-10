/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:26:59 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 23:32:44 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain::~Brain()
{
}

Brain	&Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string	Brain::get_idea(int index)
{
	return (ideas[index]);
}
