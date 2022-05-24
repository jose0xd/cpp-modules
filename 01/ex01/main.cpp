/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:08:34 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/24 13:08:38 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <cstdlib>

Zombie*	newZombie( std::string name )
{
	return (new Zombie(name));
}

void	randomChump( std::string name )
{
	Zombie	zz = Zombie(name);

	zz.announce();
}

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		new (&horde[i]) Zombie(name);
	return (horde);
}

int	main(void)
{
	Zombie		*horde;
	int			N = 7;
	std::string	name = "Descompuesto";
	int			i;

	horde = zombieHorde(N, name);
	std::cout << "There are " << N << " zombies to announce:\n";
	for (i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	std::system("leaks ./horde");
}
