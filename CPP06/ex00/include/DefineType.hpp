/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DefineType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:45:12 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/23 17:23:03 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_TYPE_HPP 
# define DEFINE_TYPE_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cctype> //isprint

bool	_isChar(const std::string& literal);
bool	_isInt(const std::string& literal);
bool	_isFloat(const std::string& literal);
bool	_isDouble(const std::string& literal);

#endif
