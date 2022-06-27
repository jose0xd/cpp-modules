/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarredon <jarredon@student.42malaga>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:47:31 by jarredon          #+#    #+#             */
/*   Updated: 2022/06/27 20:42:29 by jarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int	Converter::parse_characters()
{
	int	len = raw.size();

	if (len == 1 && !std::isdigit(raw[0]))
	{
		type = tchar;
		c_value = raw[0];
	}
	else if (len == 3 && raw[0] == '\'' && raw[2] == '\'')
	{
		type = tchar;
		c_value = raw[1];
	}
	else if (raw == "-inff" || raw == "+inff" || raw == "nanf")
	{
		type = tfloat;
		f_value = std::atof(raw.c_str());
		impossible[tchar] = impossible[tint] = true;
	}
	else if (raw == "-inf" || raw == "+inf" || raw == "nan")
	{
		type = tdouble;
		d_value = std::atof(raw.c_str());
		impossible[tchar] = impossible[tint] = true;
	}
	else
		return (0);
	return (1);
}

void	Converter::parse_digit_type()
{
	int	len = raw.size();
	int	i = 0;

	type = tint;
	if (len > 1 && (raw[0] == '+' || raw[0] == '-'))
		i++;
	while (i < len)
	{
		if (raw[i] == '.' && type == tint)
		{
			type = tdouble;
			i++;
		}
		if (raw[i] == 'f' && i == len - 1 && type == tdouble)
		{
			type = tfloat;
			return ;
		}
		if (raw[i] == 'e' && i < len - 1)
		{
			type = tdouble;
			i++;
			if (raw[i] == '+' || raw[i] == '-')
				i++;
		}
		if (i < len && !std::isdigit(raw[i]))
		{
			type = tindef;
			return ;
		}
		i++;
	}
}

void	Converter::parse()
{
	if (parse_characters())
		return ;
	parse_digit_type();
	if (type == tint)
	{
		long temp = std::atol(raw.c_str());
		if (temp > std::numeric_limits<int>::max()
			|| temp < std::numeric_limits<int>::min())
			impossible[tint] = true;
		else
			i_value = temp;
	}
	else if (type == tdouble)
		d_value = std::atof(raw.c_str());
	else if (type == tfloat)
	{
		double temp = std::atof(raw.c_str());
		if (temp > std::numeric_limits<float>::max()
			|| temp < std::numeric_limits<float>::min())
			impossible[tfloat] = true;
		else
			f_value = temp;
	}
}

void	Converter::convert()
{
	if (type == tindef)
	{
		for (int i = 0; i < 4; i++)
			impossible[i] = true;
		return ;
	}
	else if (type == tchar)
	{
		i_value = static_cast<int>(c_value);
		f_value = static_cast<float>(c_value);
		d_value = static_cast<double>(c_value);
	}
	else if (type == tint)
	{
		c_value = static_cast<char>(i_value);
		f_value = static_cast<float>(i_value);
		d_value = static_cast<double>(i_value);
	}
	else if (type == tfloat)
	{
		c_value = static_cast<char>(f_value);
		i_value = static_cast<int>(f_value);
		if (f_value > std::numeric_limits<int>::max()
			|| f_value < std::numeric_limits<int>::min())
			impossible[tint] = true;
		d_value = static_cast<double>(f_value);
	}
	else if (type == tdouble)
	{
		c_value = static_cast<char>(d_value);
		i_value = static_cast<int>(d_value);
		if (d_value > std::numeric_limits<int>::max()
			|| d_value < std::numeric_limits<int>::min())
			impossible[tint] = true;
		f_value = static_cast<float>(d_value);
		if (d_value > std::numeric_limits<float>::max()
			|| d_value < std::numeric_limits<float>::min())
			impossible[tfloat] = true;
	}
}

Converter::Converter(const std::string str)
	: raw(str), type(tindef)
{
	for (int i = 0; i < 4; i++)
		impossible[i] = false;
	parse();
	convert();
}

Converter::Converter(const Converter &other)
	: raw(other.raw), c_value(other.c_value), i_value(other.i_value),
	f_value(other.f_value), d_value(other.d_value)
{
	for (int i = 0; i < 4; i++)
		this->impossible[i] = other.impossible[i];
}

Converter::~Converter()
{
}

Converter	&Converter::operator=(const Converter &other)
{
	this->raw = other.raw;
	this->c_value = other.c_value;
	this->i_value = other.i_value;
	this->f_value = other.f_value;
	this->d_value = other.d_value;
	for (int i = 0; i < 4; i++)
		this->impossible[i] = other.impossible[i];

	return (*this);
}

void	Converter::display()
{
	std::cout << "char: ";
	if (impossible[tchar] || i_value < 0 || i_value > 127)
		std::cout << "impossible\n";
	else if (std::isprint(c_value))
		std::cout << "\'" << c_value << "\'\n";
	else
		std::cout << "Non displayable\n";
	std::cout << "int: ";
	if (impossible[tint])
		std::cout << "impossible\n";
	else
		std::cout << i_value << "\n";
	std::cout << "float: ";
	if (impossible[tfloat])
		std::cout << "impossible\n";
	else
	{
		std::cout << f_value;
		if (f_value - i_value == 0)
			std::cout << ".0";
		std::cout << "f\n";
	}
	std::cout << "double: ";
	if (impossible[tdouble])
		std::cout << "impossible\n";
	else
	{
		std::cout << d_value;
		if (d_value - i_value == 0)
			std::cout << ".0";
		std::cout << "\n";
	}
}
