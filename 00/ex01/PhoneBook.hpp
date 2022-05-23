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
