/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 08:26:43 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/28 08:56:45 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-special-ketchup burger."
		" I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger! "
		"If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		"I’ve been coming for years whereas "
		"you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {
		"debug",
		"info",
		"warning",
		"error",
		""
	};
	void	(Harl::*ptrs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int	key;
	for (key = 0; levels[key] != level; key++)
	{
		if (levels[key] == "")
		{
			std::cout << "Level not found\n";
			return ;
		}
	}
	(this->*ptrs[key])();
}
