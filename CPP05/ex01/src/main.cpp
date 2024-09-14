/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:17:51 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/14 00:57:56 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Colors.hpp"

int	main(void)
{
	{
		std::cout << YELLOW << "Test 1. Default constructors" << RESET << std::endl;
		try
		{
			Bureaucrat	b;
			std::cout << CYAN << b << RESET << std::endl;
			Form	form;
			std::cout << CYAN << form << RESET << std::endl;
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
			Bureaucrat	b("Clerk", 150);
			std::cout << CYAN << b << RESET << std::endl;
			Form	form("Registration Form", 42, 42);
			std::cout << CYAN << form << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 3. Param constructor - form grade too high" << RESET << std::endl;
		try
		{
			Form	form("Registration Form", 0, 42);
			std::cout << CYAN << form << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
		try
		{
			Form	form("Registration Form", 42, 0);
			std::cout << CYAN << form << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 4. Param constructor - form grade too low" << RESET << std::endl;
		try
		{
			Form	form("Registration Form", 200, 42);
			std::cout << CYAN << form << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
		try
		{
			Form	form("Registration Form", 42, 200);
			std::cout << CYAN << form << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 5. Successfully sign form and try again" << RESET << std::endl;
		try
		{
			Bureaucrat	boss("Boss", 1);
			std::cout << CYAN << boss << RESET << std::endl;
			Form	form("Approval Form", 10, 1);
			std::cout << CYAN << form << RESET << std::endl;
			boss.signForm(form);
			boss.signForm(form);
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 6. Fail to sign form" << RESET << std::endl;
		try
		{
			Bureaucrat	clerk("Clerk", 100);
			std::cout << CYAN << clerk << RESET << std::endl;
			Form	form("Budget Form", 42, 21);
			std::cout << CYAN << form << RESET << std::endl;
			clerk.signForm(form);
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	return 0;
}
