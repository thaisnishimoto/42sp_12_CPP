/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DefineType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:50:54 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 10:43:35 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DefineType.hpp"

bool	_isChar(const std::string& literal)
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

bool	_isInt(const std::string& literal)
{
	std::istringstream	iss(literal);

	int	number;
	iss >> number;
	if (iss.fail() || !iss.eof())
		return false;
	return true;
}

bool	_isFloat(const std::string& literal)
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

bool	_isDouble(const std::string& literal)
{
	std::istringstream	iss(literal);

	double	number;
	iss >> number;
	if (iss.fail() || !iss.eof())
		return false;
	return true;
}
