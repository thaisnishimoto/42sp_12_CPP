/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:34:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/07 00:33:16 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp" 

int	main(void)
{
	{
	std::cout << YELLOW << "TEST 1. Default initialization" << RESET << std::endl;
	int * a = new int();
	std::cout << *a << std::endl;
	}
	{
	std::cout << RESET << std::endl;
	std::cout << YELLOW << "TEST 2. Default construction" << RESET << std::endl;
	Array<int>	int_array;
	if (int_array.size() == 0)
		std::cout << "Array is empty" << std::endl;
	}
	return 0;
}
