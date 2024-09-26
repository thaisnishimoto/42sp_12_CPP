/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:02:46 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/26 18:21:38 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include "Colors.hpp"

int	main()
{
	std::cout << YELLOW << "*Set Data Struct's values*" << RESET << std::endl;
	Data	original_data;
	original_data.str = "hello";
	original_data.c = 'a';
	original_data.num = 42;
	original_data.d = 4.2;
	original_data.b = true;
	original_data.printData();

	std::cout << std::endl;
	std::cout << YELLOW << "*Serialize Data Struct*" << RESET << std::endl;
	uintptr_t	raw_address = Serializer::serialize(&original_data);

	std::cout << std::endl;
	std::cout << YELLOW << "*Deserialize Data Struct*" << RESET << std::endl;
	Data	*final_data = Serializer::deserialize(raw_address);

	std::cout << std::endl;
	std::cout << YELLOW << "*Compare return value to original ptr*" << RESET << std::endl;
	if (final_data == &original_data)
	{
		std::cout << "Return value equals the original pointer" << std::endl;
		final_data->printData();
	}
	else
		std::cout << "Error: Return value does not equal the original pointer" << std::endl;
	return 0;
}
