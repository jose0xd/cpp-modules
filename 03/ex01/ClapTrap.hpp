/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:02:57 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 01:32:57 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int			hit_pts;
	int			energy_pts;
	int			attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &other);

	std::string	get_name();
	int			get_hit_pts();
	int			get_energy_pts();
	int			get_attack_damage();
	void		print();

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
