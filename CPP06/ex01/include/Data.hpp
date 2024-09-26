/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:53:46 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/26 16:19:53 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>

struct	Data
{
	std::string	str;
	char	c;
	int	num;
	double	d;
	bool	b;

	void	printData() const {
	std::cout << "string: " << str << std::endl;
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout << std::boolalpha << "bool: " << b << std::endl;
	}
};

#endif
