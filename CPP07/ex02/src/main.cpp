/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:34:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/08 00:49:56 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp" 

int	main(void)
{
	{
	std::cout << YELLOW << "TEST 1. Default initialization" << RESET << std::endl;
	int * a = new int();
	std::cout << *a << std::endl;
	delete a;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 2. Default construction" << RESET << std::endl;
	Array<int>	int_array;
	if (int_array.size() == 0)
		std::cout << "Array is empty" << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 3. Param construction int initialized by default" << RESET << std::endl;
	Array<int>	int_array(3);
	for (unsigned int i = 0; i < int_array.size(); i++)
		std::cout << int_array[i] << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 4. Param construction str initialized by default" << RESET << std::endl;
	Array<std::string>	str_array(3);
	for (unsigned int i = 0; i < str_array.size(); i++)
		std::cout << "\"" << str_array[i] << "\"" << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 5. Copy constructor" << RESET << std::endl;
	Array<int>	orig_array(3);
	Array<int>	copy_array(orig_array);
	std::cout << "*Change original array*" << std::endl;
	for (unsigned int i = 0; i < orig_array.size(); i++)
	{
		orig_array[i] = i;
		std::cout << orig_array[i] << std::endl;
	}
	std::cout << "*Check if copy changed*" << std::endl;
	for (unsigned int i = 0; i < copy_array.size(); i++)
		std::cout << copy_array[i] << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 6. Assignment operator" << RESET << std::endl;
	Array<char>	orig_array(3);
	Array<char>	assign_array;
	assign_array = orig_array;
	std::cout << "*Change assign array*" << std::endl;
	for (unsigned int i = 0; i < assign_array.size(); i++)
	{
		assign_array[i] = 'a';
		std::cout << assign_array[i] << std::endl;
	}
	std::cout << "*Check if original changed*" << std::endl;
	for (unsigned int i = 0; i < orig_array.size(); i++)
		std::cout << "'" << orig_array[i] << "'" << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 7. Accessing index out of bound" << RESET << std::endl;
	const Array<float>	array(3);
	try {
		std::cout << array[3] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	}
	return 0;
}
