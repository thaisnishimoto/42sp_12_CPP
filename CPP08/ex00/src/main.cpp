/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:34:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/31 17:26:02 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};

	std::cout << YELLOW << "Test 1. Vector container" << RESET << std::endl;
	std::vector<int>	int_vec(arr, arr + 5);
	try {
		std::vector<int>::iterator	it;
		it = easyfind(int_vec, 1);
		std::cout << "Found value: " << *it << std::endl;

		it = easyfind(int_vec, 0);
		std::cout << "Found value: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Caught expection: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << YELLOW << "Test 2. List container" << RESET << std::endl;
	std::list<int>	int_lst(arr, arr + 5);
	try {
		std::list<int>::iterator	it;
		it = easyfind(int_lst, 2);
		std::cout << "Found value: " << *it << std::endl;

		it = easyfind(int_lst, -2);
		std::cout << "Found value: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Caught expection: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << YELLOW << "Test 3. Deque container" << RESET << std::endl;
	std::deque<int>	int_deq(arr, arr + 5);
	try {
		std::deque<int>::iterator	it;
		it = easyfind(int_deq, 3);
		std::cout << "Found value: " << *it << std::endl;

		it = easyfind(int_deq, 6);
		std::cout << "Found value: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Caught expection: " << e.what() << std::endl;
	}
	return 0;
}
