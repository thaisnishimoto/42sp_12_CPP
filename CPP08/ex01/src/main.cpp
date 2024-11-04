/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:34:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/04 00:21:23 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
	return 0;
}
