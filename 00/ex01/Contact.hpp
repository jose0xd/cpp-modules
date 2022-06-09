/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:10:48 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/09 20:37:44 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	int		fill_fields(void);
	void	print_full_name(void);
	void	print_all(void);
};

#endif
