/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:19:10 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/21 12:44:42 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <cstdint>

class Data
{
private:
	std::string	key;
	int			value;

public:
	Data(std::string key = "key", int value = 0);
	Data(const Data &other);
	virtual ~Data();

	Data	&operator=(const Data &other);
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif
