/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:50:54 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 16:07:06 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "DefineType.hpp"
#include "TypeConverters.hpp"

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

/****Static method****/

void	ScalarConverter::converter(const std::string& literal)
{
	LiteralType	type = defineType(literal);
	
	switch (type)
	{
		case CHAR:
			convertChar(literal);
			break;
		case INT:
			convertInt(literal);
			break;
		case FLOAT:
			convertFloat(literal);
			break;
		case DOUBLE:
			convertDouble(literal);
			break;
		case PSEUDO_LITERAL:
			convertPseudoLiteral(literal);
			break;
		default:
			std::cerr << "Error: Unkown literal type" << std::endl;
	}
}
