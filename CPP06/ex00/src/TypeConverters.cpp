/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverters.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:51:02 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/25 16:22:15 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConverters.hpp"

//Display functions that check for overflow
void	safeDisplayChar(char c, double d)
{
	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max()) 
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	safeDisplayInt(int num, double d)
{
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max()) 
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << num << std::endl;
}

//Convert functions
void	convertChar(const std::string& literal)
{
	std::cout << "char: '" << literal[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
}

void	convertInt(const std::string& literal)
{
	std::istringstream	iss(literal);
	int	num;
	iss >> num;

	safeDisplayChar(static_cast<char>(num), static_cast<double>(num));
	std::cout << "int: " << num << std::endl;
	std::cout << std::fixed << std::setprecision(1); 
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	convertFloat(const std::string& literal)
{
	std::istringstream	iss(literal);
	float	num;
	iss >> num;

	safeDisplayChar(static_cast<char>(num), static_cast<double>(num));
	safeDisplayInt(static_cast<int>(num), static_cast<double>(num));
	std::cout << std::fixed << std::setprecision(1); 
	std::cout << "float: " << num << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	convertDouble(const std::string& literal)
{
	(void)literal;
//	std::cout << "char: " << << std::endl;
//	std::cout << "int: " << << std::endl;
//	std::cout << "float: " << << std::endl;
//	std::cout << "double: " << << std::endl;
}

void	convertPseudoLiteral(const std::string& literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (literal == "+inff" || literal == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (literal == "-inff" || literal == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}
