/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:28:06 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/08 12:58:49 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called\n";
	number = 0;
}

Fixed::Fixed(const Fixed &fx)
{
	//std::cout << "Copy constructor called\n";
	*this = fx;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called\n";
	number = n << fract_bits;
}

Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called\n";
	number = (int)roundf(n * (1 << fract_bits));
	//number = roundf(n * (1 << fract_bits));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called\n";
	number = other.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->number > other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (other > *this);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (!(*this < other));
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (!(*this > other));
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->number == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (!(*this == other));
}

int	Fixed::getRawBits(void) const
{
	return (number);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed res = *this;

	res.setRawBits(this->getRawBits() + other.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed res = *this;

	res.setRawBits(this->getRawBits() - other.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed res = *this;

	res.setRawBits((long)this->getRawBits() * (long)other.getRawBits()
			/ (1 << fract_bits));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed res = *this;

	res.setRawBits((long)this->getRawBits() * (1 << fract_bits)
			/ other.getRawBits());
	return (res);
}

Fixed	Fixed::operator++()
{
	this->number++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed	Fixed::operator--()
{
	this->number--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &left, Fixed &right)
{
	if (left <= right)
		return (left);
	else
		return (right);
}

const Fixed	&Fixed::min(const Fixed &left, const Fixed &right)
{
	if (left <= right)
		return (left);
	else
		return (right);
}

Fixed	&Fixed::max(Fixed &left, Fixed &right)
{
	if (left >= right)
		return (left);
	else
		return (right);
}

const Fixed	&Fixed::max(const Fixed &left, const Fixed &right)
{
	if (left >= right)
		return (left);
	else
		return (right);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fx)
{
	out << fx.toFloat();
	return (out);
}
