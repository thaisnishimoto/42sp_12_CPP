/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:34:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/04 13:10:55 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>
#include <deque>

int	main(void)
{
	{
	std::cout << YELLOW << "Test 1. PDF" << RESET << std::endl;
		Span sp = Span(5);
	
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 2. addNumber exception" << RESET << std::endl;
		Span sp = Span(1);
		try {
			sp.addNumber(6);
			sp.addNumber(3);
		} catch (std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 3. Shortest Span exception" << RESET << std::endl;
		Span sp = Span(1);
		try {
			sp.addNumber(6);
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 4. Longest Span exception" << RESET << std::endl;
		Span sp = Span(1);
		try {
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 5. Negative numbers" << RESET << std::endl;
		Span sp = Span(3);
		try {
			sp.addNumber(-10);
			sp.addNumber(-42);
			sp.addNumber(-100);
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 6. Add range of numbers" << RESET << std::endl;
		srand(time(0));
		Span sp = Span(30000);

		std::vector<int>	numVec;
		for (int i = 0; i < 10000; ++i)
			numVec.push_back(rand());

		std::list<int>	numLst;
		for (int i = 0; i < 10000; ++i)
			numLst.push_back(rand());

		std::deque<int>	numDeq;
		for (int i = 0; i < 10000; ++i)
			numDeq.push_back(rand());

		std::vector<int>	numVec2;
		for (int i = 0; i < 100; ++i)
			numVec2.push_back(rand());

		try {
			std::cout << "*Adding vector of random ints*" << std::endl;
			sp.addNumbersRange(numVec.begin(), numVec.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

			std::cout << std::endl;
			std::cout << "*Adding list of random ints*" << std::endl;
			sp.addNumbersRange(numLst.begin(), numLst.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

			std::cout << std::endl;
			std::cout << "*Adding deque of random ints*" << std::endl;
			sp.addNumbersRange(numDeq.begin(), numDeq.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

			std::cout << std::endl;
			std::cout << "*Adding another vector after reaching max size*" << std::endl;
			sp.addNumbersRange(numVec.begin(), numVec.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	return 0;
}
