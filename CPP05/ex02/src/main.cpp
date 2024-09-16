/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:17:51 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 12:35:21 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"

int	main(void)
{
	{
		std::cout << YELLOW << "Test 1. Default constructors" << RESET << std::endl;
		AForm*	form[3];
		for (int i = 0; i < 3; i++)
			form[i] = NULL;
		try
		{
			form[0] = new ShrubberyCreationForm();
			std::cout << CYAN << *form[0] << RESET << std::endl;
			form[1] = new RobotomyRequestForm();
			std::cout << CYAN << *form[1] << RESET << std::endl;
			form[2] = new PresidentialPardonForm();
			std::cout << CYAN << *form[2] << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
			for (int i = 0; i < 3; i++)
				delete form[i];
		}
		for (int i = 0; i < 3; i++)
			delete form[i];
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 2. Param constructors" << RESET << std::endl;
		AForm*	form[3];
		for (int i = 0; i < 3; i++)
			form[i] = NULL;
		try
		{
			form[0] = new ShrubberyCreationForm("Forest");
			std::cout << CYAN << *form[0] << RESET << std::endl;
			form[1] = new RobotomyRequestForm("TV");
			std::cout << CYAN << *form[1] << RESET << std::endl;
			form[2] = new PresidentialPardonForm("Pirate");
			std::cout << CYAN << *form[2] << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
			for (int i = 0; i < 3; i++)
				delete form[i];
		}
		for (int i = 0; i < 3; i++)
			delete form[i];
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 3. Execute Shruberry Form" << RESET << std::endl;
		try
		{
			Bureaucrat	knight("Knight", 137);
			std::cout << CYAN << knight << RESET << std::endl;
			Bureaucrat	squire("Squire", 145);
			std::cout << CYAN << squire << RESET << std::endl;
			ShrubberyCreationForm	sForm = ShrubberyCreationForm("Monty");
			std::cout << CYAN << sForm << RESET << std::endl;

			knight.executeForm(sForm);
			squire.signForm(sForm);
			squire.executeForm(sForm);
			knight.executeForm(sForm);
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 4. Execute Robotomy Form" << RESET << std::endl;
		try
		{
			Bureaucrat	engineer("Engineer", 45);
			std::cout << CYAN << engineer << RESET << std::endl;
			Bureaucrat	mechanic("Mechanic", 72);
			std::cout << CYAN << mechanic << RESET << std::endl;
			RobotomyRequestForm	rForm = RobotomyRequestForm("printer");
			std::cout << CYAN << rForm << RESET << std::endl;

			engineer.executeForm(rForm);
			mechanic.signForm(rForm);
			mechanic.executeForm(rForm);
			engineer.executeForm(rForm);
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 5. Execute Presidential Form" << RESET << std::endl;
		try
		{
			Bureaucrat	p("Mr President", 5);
			std::cout << CYAN << p << RESET << std::endl;
			Bureaucrat	vp("Vice President", 25);
			std::cout << CYAN << vp << RESET << std::endl;
			PresidentialPardonForm	pForm = PresidentialPardonForm("Marvin");
			std::cout << CYAN << pForm << RESET << std::endl;

			p.executeForm(pForm);
			vp.signForm(pForm);
			vp.executeForm(pForm);
			p.executeForm(pForm);
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
		}
	}
	return 0;
}
