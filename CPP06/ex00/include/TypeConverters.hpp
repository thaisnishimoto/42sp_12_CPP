/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverters.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:50:39 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 18:09:55 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_CONVERTERS_HPP
# define TYPE_CONVERTERS_HPP

# include <string>
# include <iostream>
# include <sstream>

void	convertChar(const std::string& literal);
void	convertInt(const std::string& literal);
void	convertFloat(const std::string& literal);
void	convertDouble(const std::string& literal);
void	convertPseudoLiteral(const std::string& literal);

#endif
