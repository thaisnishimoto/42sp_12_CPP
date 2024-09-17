/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:20:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 10:31:57 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Basic Form"), _signed(false), _requiredSignGrade(150), _requiredExecGrade(150), _target("undefined target")
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade, std::string target) : _name(name), _signed(false), _requiredSignGrade(signGrade), _requiredExecGrade(execGrade), _target(target)
{
	if (this->_requiredSignGrade < HIGHEST_GRADE || this->_requiredExecGrade < HIGHEST_GRADE)
		throw AForm::GradeTooHighException();
	else if (this->_requiredSignGrade > LOWEST_GRADE || this->_requiredExecGrade > LOWEST_GRADE)
		throw AForm::GradeTooLowException();
	std::cout << "AForm param constructor called" << std::endl;
}

AForm::AForm(const AForm& src) : _name(src._name), _requiredSignGrade(src._requiredSignGrade), _requiredExecGrade(src._requiredExecGrade) 
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
}

AForm& AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSignStatus();
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

std::string	AForm::getName() const
{
	return this->_name;
}

std::string	AForm::getTarget() const
{
	return this->_target;
}

bool	AForm::getSignStatus() const
{
	return this->_signed;
}

int	AForm::getSignGrade() const
{
	return this->_requiredSignGrade;
}

int	AForm::getExecGrade() const
{
	return this->_requiredExecGrade;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_requiredSignGrade)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

void	AForm::execute(Bureaucrat const &  executor) const
{
	if (this->getSignStatus() == false)
		throw AForm::FormUnsignedException();
	if (executor.getGrade() > this->_requiredExecGrade)
		throw AForm::GradeTooLowException();
	this->executeAction();
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high for form.";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low for form.";
}

const char*	AForm::FormUnsignedException::what() const throw()
{
	return "form is unsigned.";
}

std::ostream&	operator<<(std::ostream& o, const AForm& rhs)
{
	o << rhs.getName(); 
	if (rhs.getSignStatus())
		o << " is signed. "; 
	else
		o << " is unsigned. ";
	o << "It requires grade " << rhs.getSignGrade() << " to be signed and grade "
	  << rhs.getExecGrade() << " to be executed. It targets " << rhs.getTarget() << ".";
	return o;
}
