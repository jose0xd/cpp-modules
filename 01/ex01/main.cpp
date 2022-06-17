/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:08:34 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/17 19:25:34 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
//#include <cstdlib>

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
	//std::system("leaks horde");
}
