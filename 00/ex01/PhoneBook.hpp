/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:11:08 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/24 13:11:13 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"

# define MAX_STORE 8

class PhoneBook
{
private:
	Contact	contacts[MAX_STORE];
	int		last;

	void	make_room(void);

public:
	PhoneBook();
	~PhoneBook();

	void	add_contact(void);
	void	search_contact(void);
};

#endif
