/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DefineType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:45:12 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 16:08:04 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_TYPE_HPP 
# define DEFINE_TYPE_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cctype> //isprint

enum	LiteralType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO_LITERAL,
	UNKNOWN
};

LiteralType	defineType(const std::string& literal);
bool	isPseudoLiteral(const std::string& literal);
bool	isChar(const std::string& literal);
bool	isInt(const std::string& literal);
bool	isFloat(const std::string& literal);
bool	isDouble(const std::string& literal);

#endif
