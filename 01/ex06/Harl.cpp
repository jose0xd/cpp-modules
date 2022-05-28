/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 08:26:43 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/28 21:48:34 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-special-ketchup burger."
		" I really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger! "
		"If you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		"I’ve been coming for years whereas "
		"you started working here since last month.\n\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

int		Harl::get_key(std::string level)
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
		""
	};
	int	key;
	for (key = 0; levels[key] != level; key++)
	{
		if (levels[key] == "")
			return (-1);
	}
	return (key);
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptrs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int		key = get_key(level);

	if (key == -1)
	{
		std::cout << "Level not found\n";
		return ;
	}
	else
		(this->*ptrs[key])();
}

// In order to compile with -Wextra and -Werror a switch without break
// you can compile with -Wimplicit-fallthrough=0
// or use the GCC language extension "__attribute__ ((fallthrough))" 
void	Harl::filter(std::string level)
{
	void	(Harl::*ptrs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int		key = get_key(level);

	switch (key)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			(this->*ptrs[0])();
			__attribute__ ((fallthrough));
		case 1:
			std::cout << "[ INFO ]\n";
			(this->*ptrs[1])();
			__attribute__ ((fallthrough));
		case 2:
			std::cout << "[ WARNING ]\n";
			(this->*ptrs[2])();
			__attribute__ ((fallthrough));
		case 3:
			std::cout << "[ ERROR ]\n";
			(this->*ptrs[3])();
			break ;
		default:
			std::cout << "[ Probably complaining "
				"about insignificant problems ]\n";
	}
}
