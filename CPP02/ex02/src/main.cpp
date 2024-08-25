/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:21:59 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/25 17:15:57 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	{
		std::cout << "1. PDF TEST" << std::endl;
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
	
		std::cout << a << std::endl;
//		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
//		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
	
		std::cout << b << std::endl;
	
//		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "2. COMPARISON TESTS" << std::endl;
		Fixed	a(5.05f);
		Fixed	b(2.0f);
		Fixed	c(a);
		
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "c = " << c << std::endl;

		std::cout << "a > b: " << (a > b ? "True" : "False") << std::endl;
		std::cout << "b < a: " << (b < a ? "True" : "False") << std::endl;
		std::cout << "a >= b: " << (a >= b ? "True" : "False") << std::endl;
		std::cout << "b <= a: " << (b <= a ? "True" : "False") << std::endl;
		std::cout << "a == c: " << (a == c ? "True" : "False") << std::endl;
		std::cout << "a != b: " << (a != b ? "True" : "False") << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "3. ARITHMETIC TESTS" << std::endl;
		Fixed a(5.05f);
		Fixed b(2.0f);
		Fixed c(a);
		
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "c = " << c << std::endl;
		
		Fixed addResult = a + b;
		std::cout << "a + b = " << addResult << std::endl;
		
		Fixed subResult = a - b;
		std::cout << "a - b = " << subResult << std::endl;
		
		Fixed mulResult = a * b;
		std::cout << "a * b = " << mulResult << std::endl;
		
		Fixed divResult = a / b;
		std::cout << "a / b = " << divResult << std::endl;
		
		std::cout << std::endl;
	}
	return 0;
}
