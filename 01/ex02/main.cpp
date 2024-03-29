/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:15:02 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/28 09:11:27 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of string variable: " << &str << "\n";
	std::cout << "Address of stringPTR:       " << stringPTR << "\n";
	std::cout << "Address of stringREF:       " << &stringREF << "\n\n";

	std::cout << "Value of string variable: " << str << "\n";
	std::cout << "Value of stringPTR:       " << *stringPTR << "\n";
	std::cout << "Value of stringREF:       " << stringREF << "\n";
}
