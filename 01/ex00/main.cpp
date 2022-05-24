/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:09:35 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/24 13:09:36 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	return (new Zombie(name));
}

void	randomChump( std::string name )
{
	Zombie	zz = Zombie(name);

	zz.announce();
}

int	main(void)
{
	Zombie	*z_ptr;

	std::cout << "Calling newZombie function:\n";
	z_ptr = newZombie("Freddy");
	std::cout << "Using announce method of new zombie:\n";
	z_ptr->announce();
	delete z_ptr;

	std::cout << "\nCalling randomChump function:\n";
	randomChump("Donald");
}
