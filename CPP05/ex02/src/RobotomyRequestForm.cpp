/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 10:33:05 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Form", 72, 45, "random appliance")
{
	std::cout << "Robotomy form default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Form", 72, 45, target)
{
	std::cout << "Robotomy form param constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src)
{
	std::cout << "Robotomy form copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy form destructor called" << std::endl;
}

void	RobotomyRequestForm::executeAction() const
{
	RobotomyRequestForm::_seedRandomGenerator();

	std::cout << "BZZzzZZzzZZzzz..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been successfully robotomized!" << std::endl;
	else
		std::cout << this->getTarget() << "'s robotomy failed.." << std::endl;
}

/*****Static methods*****/

bool	RobotomyRequestForm::_isSeeded = false;

void	RobotomyRequestForm::_seedRandomGenerator()
{
	if (RobotomyRequestForm::_isSeeded == false)
	{
		std::srand(std::time(0));
		RobotomyRequestForm::_isSeeded = true;
	}
}
