/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:03:43 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 22:28:19 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

const char*	Intern::FormNameDoesntExistException::what() const throw()
{
	return "Form name requested does not exist.";
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	std::string formOptions[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (Intern::*formCreationPtr[3])(const std::string target) = {
	&Intern::_makeShrubberyForm, &Intern::_makeRobotomyForm, &Intern::_makePresidentialForm};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formOptions[i])
			return (this->*formCreationPtr[i])(target);
	}
	throw Intern::FormNameDoesntExistException();
}

AForm*		Intern::_makeShrubberyForm(const std::string target)
{       	
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::_makeRobotomyForm(const std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::_makePresidentialForm(const std::string target)
{
	return new PresidentialPardonForm(target);
}
