/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:10 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/13 16:32:34 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("John Doe"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int initialGrade) : _name(name)
{
	if (initialGrade < HIGHEST_GRADE)
		throw  Bureaucrat::GradeTooHighException();
	else if (initialGrade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		_grade = initialGrade;
		std::cout << "Bureaucrat param constructor called" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const 
{
	return this->_name;
}

int	Bureaucrat::getGrade() const 
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < HIGHEST_GRADE)
		throw  Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > LOWEST_GRADE)
		throw  Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
