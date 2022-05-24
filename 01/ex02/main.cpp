/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:15:02 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/24 13:22:46 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << "Memory address of string variable: " << &str << "\n";
	cout << "Memory address of stringPTR:       " << stringPTR << "\n";
	cout << "Memory address of stringREF:       " << &stringREF << "\n\n";

	cout << "Value of string variable: " << str << "\n";
	cout << "Value of stringPTR:       " << *stringPTR << "\n";
	cout << "Value of stringREF:       " << stringREF << "\n";
}
