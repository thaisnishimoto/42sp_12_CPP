/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:34:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/08 12:10:49 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>
#include <iomanip> //setprecision

int	main(void)
{
	{
	std::cout << YELLOW << "1. Array of ints" << RESET << std::endl;
	const int	length = 5;
	int	array[length] = {1, 3, 5, 7, 9};

	iter(array, length, printElem<int>);
	iter(array, length, addOne<int>);
	std::cout << std::endl;
	iter(array, length, printElem<int>);
	iter(array, length, replaceNum<int>);
	std::cout << std::endl;
	iter(array, length, printElem<int>);
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "2. Array of floats" << RESET << std::endl;
	const int	length = 5;
	float	array[length] = {1.0, 3.0, 5.0, 7.0, 9.0};

	std::cout << std::fixed << std::setprecision(1);
	iter(array, length, printElem<float>);
	iter(array, length, addOne<float>);
	std::cout << std::endl;
	iter(array, length, printElem<float>);
	iter(array, length, replaceNum<float>);
	std::cout << std::endl;
	iter(array, length, printElem<float>);
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "3. Array of strings" << RESET << std::endl;
	const int	length = 5;
	std::string	array[length] = {"One", "Two", "Three", "Four", "Five"};

	iter(array, length, printElem<std::string>);
	iter(array, length, concatOne<std::string>);
	std::cout << std::endl;
	iter(array, length, printElem<std::string>);
	iter(array, length, replaceStr<std::string>);
	std::cout << std::endl;
	iter(array, length, printElem<std::string>);
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "4. Const array of ints" << RESET << std::endl;
	const int	length = 5;
	const int	array[length] = {1, 3, 5, 7, 9};

	iter(array, length, printElem<const int>);
	}
	return 0;
}
