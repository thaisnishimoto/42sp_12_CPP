/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:45:12 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/26 14:57:35 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <string>
# include <iostream>

class	ScalarConverter {

public:
	~ScalarConverter();
	static void	converter(const std::string& literal);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& src);
	ScalarConverter&	operator=(const ScalarConverter& rhs);
};

#endif
