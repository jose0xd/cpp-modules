/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:19:23 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/20 14:00:13 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					number;
	static const int	fract_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &fx);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();

	Fixed	 &operator=(const Fixed &other);
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed		&min(Fixed &left, Fixed &right);
	static const Fixed	&min(const Fixed &left, const Fixed &right);
	static Fixed		&max(Fixed &left, Fixed &right);
	static const Fixed	&max(const Fixed &left, const Fixed &right);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fx);

#endif
