/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:59:06 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/21 08:14:46 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <cstdlib>
# include <cctype>
# include <iostream>
# include <limits>
# include <string>

class Converter
{
private:
	Converter();

	std::string	raw;
	enum {
		tchar,
		tint,
		tfloat,
		tdouble,
		tindef
	}			type;
	bool		impossible[4];
	char		c_value;
	int			i_value;
	float		f_value;
	double		d_value;

	int		parse_characters();
	void	parse_digit_type();
	void	parse();
	void	convert();

public:
	Converter(const std::string str);
	Converter(const Converter &other);
	~Converter();

	Converter	&operator=(const Converter &other);

	void		display();
};

#endif
