/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:10 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/14 22:14:53 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Colors.hpp"

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

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name)
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

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		if (form.getSignStatus() == true)
		{
			std::cout << RED << this->_name << " couldn’t sign " << form.getName()
				  << " because it is already signed." << RESET << std::endl;
		}
		else
		{
			form.beSigned(*this);
			std::cout << CYAN << this->_name << " signed " << form.getName() << RESET << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << RED << this->_name << " couldn’t sign " << form.getName()
			  << " because " << e.what() << RESET << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << CYAN << this->_name << " executed " << form.getName() << RESET << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << RED << this->_name << " couldn’t execute " << form.getName()
			  << " because " << e.what() << RESET << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high for bureaucrat.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low for bureaucrat.");
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
