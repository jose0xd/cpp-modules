#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	static std::string	titles[6];
	std::string			fields[5];

public:
	Contact();
	~Contact();

	void	fill_fields(void);
	void	print_full_name(void);
	void	print_all(void);
};

#endif
