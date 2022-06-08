/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:09:27 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/08 17:53:29 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{
private:
	const Fixed	x;
	const Fixed	y;

public:
	Point();
	Point(const float fx, const float fy);
	Point(const Point &other);
	~Point();

	Point	&operator=(const Point &other);
	Point	operator-(const Point &other) const;
	Fixed	get_x() const;
	Fixed	get_y() const;

	void	print(void);
};

#endif
