/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DefineType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:50:54 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 16:21:53 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DefineType.hpp"

LiteralType	defineType(const std::string& literal)
{
	if (isChar(literal))
		return CHAR;
	if (isInt(literal))
		return INT;
	if (isFloat(literal))
		return FLOAT;
	if (isDouble(literal))
		return DOUBLE;
	if (isPseudoLiteral(literal))
		return PSEUDO_LITERAL;
	return UNKNOWN;
}

bool	isPseudoLiteral(const std::string& literal)
{
	if (literal == "+inf" || literal == "-inf" || literal == "nan")
		return true;
	if (literal == "+inff" || literal == "-inff" || literal == "nanf")
		return true;
	return false;
}

bool	isChar(const std::string& literal)
{
	if (literal.length() != 1)
		return false;

	char	c = literal[0];
	if (std::isdigit(c))
		return false;

	if (std::isprint(c))
		return true;
	std::cerr << "Non displayable characters shouldn’t be used as inputs" << std::endl;
	return false;
}

bool	isInt(const std::string& literal)
{
	std::istringstream	iss(literal);

	int	number;
	iss >> number;
	if (iss.fail() || !iss.eof())
		return false;
	return true;
}

bool	isFloat(const std::string& literal)
{
	std::istringstream	iss(literal);

	float	number;
	iss >> number;
	if (iss.fail() || iss.eof())
		return false;

 	std::string	suffix;
	iss >> suffix;
	if (suffix != "f")
		return false;
	return true;
}

bool	isDouble(const std::string& literal)
{
	std::istringstream	iss(literal);

	double	number;
	iss >> number;
	if (iss.fail() || !iss.eof())
		return false;
	return true;
}
