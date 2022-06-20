/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:02:09 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/20 14:17:49 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// More tests
	Fixed	x(3.14f);
	Fixed	y(42);

	std::cout << "\nMore tests\n";
	std::cout << x << " + " << y << " = " << x + y << "\n";
	std::cout << x << " - " << y << " = " << x - y << "\n";
	std::cout << x << " * " << y << " = " << x * y << "\n";
	std::cout << x << " / " << y << " = " << x / y << "\n";
	std::cout << "40.42 > 42.40: " << (Fixed(40.42f) > Fixed(42.40f)) << "\n";
	std::cout << "42.40 > 42.40: " << (Fixed(42.40f) > Fixed(42.40f)) << "\n";
	std::cout << "40.42 < 42.40: " << (Fixed(40.42f) < Fixed(42.40f)) << "\n";
	std::cout << "42.40 < 42.40: " << (Fixed(42.40f) < Fixed(42.40f)) << "\n";
	std::cout << "40.42 >= 42.40: " << (Fixed(40.42f) >= Fixed(42.40f)) << "\n";
	std::cout << "42.40 >= 42.40: " << (Fixed(42.40f) >= Fixed(42.40f)) << "\n";
	std::cout << "40.42 <= 42.40: " << (Fixed(40.42f) <= Fixed(42.40f)) << "\n";
	std::cout << "42.40 <= 42.40: " << (Fixed(42.40f) <= Fixed(42.40f)) << "\n";
	std::cout << "40.42 == 42.40: " << (Fixed(40.42f) == Fixed(42.40f)) << "\n";
	std::cout << "42.42 == 42.42: " << (Fixed(42.42f) == Fixed(42.42f)) << "\n";
	std::cout << "40.42 != 42.40: " << (Fixed(40.42f) != Fixed(42.40f)) << "\n";
	std::cout << "42.42 != 42.42: " << (Fixed(42.42f) != Fixed(42.42f)) << "\n";

	return (0);
}
