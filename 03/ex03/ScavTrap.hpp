/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:18:47 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 16:36:05 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
	std::string	name;
	int			hit_pts;
	int			energy_pts;
	int			attack_damage;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();

	void		attack(const std::string &target);
	void		guardGate();
};

#endif
