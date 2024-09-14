/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:20:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/14 00:54:31 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Blank Form"), _signed(false), _requiredSignGrade(150), _requiredExecGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _requiredSignGrade(signGrade), _requiredExecGrade(execGrade)
{
	if (this->_requiredSignGrade < HIGHEST_GRADE || this->_requiredExecGrade < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (this->_requiredSignGrade > LOWEST_GRADE || this->_requiredExecGrade > LOWEST_GRADE)
		throw Form::GradeTooLowException();
	std::cout << "Form param constructor called" << std::endl;
}

Form::Form(const Form& src) : _name(src._name), _requiredSignGrade(src._requiredSignGrade), _requiredExecGrade(src._requiredExecGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSignStatus();
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName() const
{
	return this->_name;
}

bool	Form::getSignStatus() const
{
	return this->_signed;
}

int	Form::getSignGrade() const
{
	return this->_requiredSignGrade;
}

int	Form::getExecGrade() const
{
	return this->_requiredExecGrade;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_requiredSignGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade too high for form.";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Grade too low for form.";
}

std::ostream&	operator<<(std::ostream& o, const Form& rhs)
{
	o << rhs.getName(); 
	if (rhs.getSignStatus())
		o << " is signed. "; 
	else
		o << " is unsigned. ";
	o << "It requires grade " << rhs.getSignGrade() << " to be signed and grade "
	  << rhs.getExecGrade() << " to be executed.";
	return o;
}
