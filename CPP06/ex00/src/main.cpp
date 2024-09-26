/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:50:09 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/26 10:46:58 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Colors.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ScalarConverter::converter(argv[1]);
		return 0;
	}
	std::cerr << "Usage: " << argv[0] << " <literal>"<< std::endl;
	return 1;
}
