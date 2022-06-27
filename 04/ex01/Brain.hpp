/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:57:44 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 16:29:36 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(const Brain &other);
	~Brain();

	Brain		&operator=(const Brain &other);
	std::string	get_idea(int index);
	void		set_idea(int index, std::string str);
};

#endif
