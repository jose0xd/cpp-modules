/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:10:48 by jarredon          #+#    #+#             */
/*   Updated: 2022/05/24 13:10:49 by jarredon         ###   ########.fr       */
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

	void	fill_fields(void);
	void	print_full_name(void);
	void	print_all(void);
};

#endif
