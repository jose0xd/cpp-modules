/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:28:06 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/20 13:57:42 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	number = 0;
}

Fixed::Fixed(const Fixed &fx)
{
	std::cout << "Copy constructor called\n";
	*this = fx;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	number = n << fract_bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	number = (int)roundf(n * (1 << fract_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	number = other.number;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)number / (1 << fract_bits));
}

int	Fixed::toInt(void) const
{
	return (number >> fract_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fx)
{
	out << fx.toFloat();
	return (out);
}
