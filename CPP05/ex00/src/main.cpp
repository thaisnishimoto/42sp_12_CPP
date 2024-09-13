/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:17:51 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/13 16:31:53 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Colors.hpp"

int	main(void)
{
	{
		std::cout << YELLOW << "Test 1. Default constructor" << RESET << std::endl;
		try
		{
			Bureaucrat	b;
			std::cout << b << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 2. Param constructor" << RESET << std::endl;
		try
		{
			Bureaucrat	b("Thais", 1);
			std::cout << b << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 3. Param constructor - grade too high" << RESET << std::endl;
		try
		{
			Bureaucrat	b("Thais", 0);
			std::cout << b << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 4. Param constructor - grade too low" << RESET << std::endl;
		try
		{
			Bureaucrat	b("Thais", 1000);
			std::cout << b << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 5. Increment grade until too high" << RESET << std::endl;
		try
		{
			Bureaucrat	b("Thais", 2);
			std::cout << b << std::endl;
			for (int i = 0; i < 2; i++)
			{
				b.incrementGrade();
				std::cout << b << std::endl;
			}
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 5. Decrement grade until too low" << RESET << std::endl;
		try
		{
			Bureaucrat	b("Thais", 149);
			std::cout << b << std::endl;
			for (int i = 0; i < 2; i++)
			{
				b.decrementGrade();
				std::cout << b << std::endl;
			}
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	return 0;
}
