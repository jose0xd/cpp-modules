#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact		contact[8];
	static int	last;

public:
	PhoneBook();
	~PhoneBook();

	void	add_contact(void);
	void	search_contact(void);
};

#endif
