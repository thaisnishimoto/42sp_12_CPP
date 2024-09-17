/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:17:51 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 23:29:17 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"

int	main(void)
{
	{
		std::cout << YELLOW << "Test 1. Create unkown form" << RESET << std::endl;
		Intern	intern;
		AForm*	form = NULL;
		try
		{
			form = intern.makeForm("unkown shrubberies", "campus");
			std::cout << CYAN << form << RESET << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
			delete form;
		}
		delete form;
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Test 2. Create all types of forms" << RESET << std::endl;
		Intern	intern;
		AForm*	form[3];
		for (int i = 0; i < 3; i++)
			form[i] = NULL;
		try
		{
			form[0] = intern.makeForm("shrubbery creation", "campus");
			std::cout << CYAN << *form[0] << RESET << std::endl;
			form[1] = intern.makeForm("robotomy request", "roomba");
			std::cout << CYAN << *form[1] << RESET << std::endl;
			form[2] = intern.makeForm("presidential pardon", "thief");
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
		std::cout << YELLOW << "Test 3. Execute form created by inter" << RESET << std::endl;
		Intern	squire;
		AForm*	sForm = NULL;
		try
		{
			Bureaucrat	knight("Knight", 42);
			std::cout << CYAN << knight << RESET << std::endl;

			sForm = squire.makeForm("shrubbery creation", "Garden");
			std::cout << CYAN << *sForm << RESET << std::endl;
			knight.executeForm(*sForm);
			knight.signForm(*sForm);
			knight.executeForm(*sForm);
		}
		catch (std::exception& e)
		{
			std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
			delete sForm;
		}
		delete sForm;
	}
	return 0;
}
