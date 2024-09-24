/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverters.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:51:02 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 18:01:24 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConverters.hpp"

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

	if (num >= 0 && num <= 127) //ascii range
	{
		char	c = static_cast<char>(num);
		if (std::isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;

	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}

void	convertFloat(const std::string& literal)
{
	(void)literal;
//	std::cout << "char: " << << std::endl;
//	std::cout << "int: " << << std::endl;
//	std::cout << "float: " << << std::endl;
//	std::cout << "double: " << << std::endl;
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
	(void)literal;
//	std::cout << "char: " << << std::endl;
//	std::cout << "int: " << << std::endl;
//	std::cout << "float: " << << std::endl;
//	std::cout << "double: " << << std::endl;
}
