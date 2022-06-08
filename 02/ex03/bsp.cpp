/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:10:18 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/08 18:14:30 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// https://blackpawn.com/texts/pointinpoly/

static Fixed	cross_product(const Point &a, const Point &b)
{
	return (a.get_x() * b.get_y() - b.get_x() * a.get_y());
}

// Check if p1 and p2 are on the same side of line a-b
// return 0: one point on the line
// return > 0: the same side
// return < 0: different sides
static int	same_side(Point p1, Point p2, Point a, Point b)
{
	Fixed cp1 = cross_product(b - a, p1 - a);
	Fixed cp2 = cross_product(b - a, p2 - a);
	return (cp1.toInt() * cp2.toInt());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if ((same_side(point, a, b, c) > 0)
			&& (same_side(point, b, a, c) > 0)
			&& same_side(point, c, a, b) > 0)
		return true;
	else
		return false;
}
