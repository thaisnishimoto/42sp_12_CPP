/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:45:12 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/19 14:56:19 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>

class	ScalarConverter {

public:
	virtual ~ScalarConverter();
	static void	converter(const std::string& literal);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& src);
	ScalarConverter&	operator=(const ScalarConverter& rhs);

	//helper methods 
	static bool	_isChar(const std::string& literal);
};

#endif
