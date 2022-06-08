/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:09:22 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/08 18:04:55 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	: x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const float fx, const float fy)
	: x(Fixed(fx)), y(Fixed(fy))
{
}

Point::Point(const Point &other)
	: x(Fixed(other.get_x().toFloat())), y(Fixed(other.get_y().toFloat()))
{
}

Point::~Point()
{
}

Point	&Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Point	Point::operator-(const Point &other) const
{
	float fx = this->x.toFloat() - other.get_x().toFloat();
	float fy = this->y.toFloat() - other.get_y().toFloat();
	return (Point(fx, fy));
}

Fixed	Point::get_x() const
{
	return (this->x);
}

Fixed	Point::get_y() const
{
	return (this->y);
}

void	Point::print(void)
{
	std::cout << "x: " << this->x << " y: " << this->y << "\n";
}
