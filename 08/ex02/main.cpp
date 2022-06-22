/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 23:01:38 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/23 01:21:43 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

//#include <list>
//#define MutantStack std::list
//#define push push_back
//#define top back
//#define pop pop_back

int	main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	// Comment this line to use 'list' instead of 'MutantStack'
	std::stack<int> s(mstack);
	return (0);
}
