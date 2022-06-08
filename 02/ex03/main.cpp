/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:02:09 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/08 18:08:52 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	std::cout << "3 puntos:\n";
	Point	a = Point(3, 6);
	a.print();
	Point	b = Point(5, 2);
	b.print();
	Point	c = Point(7, 5);
	c.print();
	Point	p1 = Point(4, 5); // dentro
	Point	p2 = Point(4, 4); // linea
	Point	p3 = Point(6, 3); // fuera

	std::cout << "bsp (dentro): " << bsp(a, b, c, p1) << "\n";
	p1.print();
	std::cout << "bsp (linea):  " << bsp(a, b, c, p2) << "\n";
	p2.print();
	std::cout << "bsp (fuera):  " << bsp(a, b, c, p3) << "\n";
	p3.print();

	return (0);
}
