/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:21:59 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/25 20:58:00 by tmina-ni         ###   ########.fr       */
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
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
	
		std::cout << b << std::endl;
	
		std::cout << Fixed::max(a, b) << std::endl;
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
	{
		std::cout << "4. INCREMENT/DECREMENT TESTS" << std::endl;
		
		Fixed a(5);
		std::cout << "Initial value of a = " << a << std::endl;
		
		Fixed& preIncResult = ++a;
		std::cout << "Value of pre-increment result (++a): " << preIncResult << std::endl;
		std::cout << "Value of 'a' after pre-increment: " << a << std::endl;
		
		Fixed postIncResult = a++;
		std::cout << "Value of post-increment result (a++): " << postIncResult << std::endl;
		std::cout << "Value of 'a' after post-increment: " << a << std::endl;
		
		Fixed& preDecResult = --a;
		std::cout << "Value of pre-decrement result (--a): " << preDecResult << std::endl;
		std::cout << "Value of 'a' after pre-decrement: " << a << std::endl;
		
		Fixed postDecResult = a--;
		std::cout << "Value of post-decrement result (a--): " << postDecResult << std::endl;
		std::cout << "Value of 'a' after post-decrement: " << a << std::endl;

		std::cout << std::endl;
	}
	{
		std::cout << "5. MIN/MAXT TESTS" << std::endl;
		Fixed a(5.05f);
		Fixed b(3.14f);
		
		Fixed& min1 = Fixed::min(a, b);            // Calls the non-const version
		std::cout << "Min = " << min1 << std::endl;
		const Fixed& min2 = Fixed::min(a, b);      // Also calls the non-const version
		std::cout << "Min = " << min2 << std::endl;
		Fixed& max1 = Fixed::max(a, b);            // Calls the non-const version
		std::cout << "Max = " << max1 << std::endl;
		
		const Fixed c(2.71f);
		const Fixed d(4.0f);
		
		const Fixed& min3 = Fixed::min(c, d);      // Calls the const version
		std::cout << "Min = " << min3 << std::endl;
		const Fixed& max2 = Fixed::max(c, d);      // Calls the const version
		std::cout << "Max = " << max2 << std::endl;
	}
	return 0;
}
