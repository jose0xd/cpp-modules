/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:19:23 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/29 21:03:58 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					number;
	static const int	fract_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &fx);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
