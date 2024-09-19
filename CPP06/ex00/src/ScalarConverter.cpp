/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:50:54 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/19 14:57:09 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	(void)src;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	(void)rhs;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
}

bool	_isChar(const std::string& literal)
{
	if (literal.length() == 1)
	{
		char	c = literal[0];
		if (std::isprint(c))
			return true;
		else
			std::cerr << "Non displayable characters shouldn’t be used as inputs" << std::endl;
	}
	return false;
}

void	ScalarConverter::converter(const std::string& literal)
{
	
}
