/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:50:41 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 16:33:15 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string	name;
	int			hit_pts;
	int			energy_pts;
	int			attack_damage;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap();

	void		attack(const std::string &target);
	void		whoAmI();
	void		print();
};

#endif
