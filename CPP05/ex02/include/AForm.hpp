/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:53:52 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 00:51:47 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {

public:
	AForm();
	AForm(std::string name, int signGrade, int execGrade, std::string target);
	AForm(const AForm& src);
	AForm& operator=(const AForm& rhs);
	virtual ~AForm();

	std::string	getName() const;
	std::string	getTarget() const;
	bool	getSignStatus() const;
	int	getSignGrade() const;
	int	getExecGrade() const;

	void	beSigned(const Bureaucrat& bureaucrat);
	void	execute(Bureaucrat const & executor) const;
	virtual void	executeAction() const = 0;

	class	GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class	FormUnsignedException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

private:
	static const int	HIGHEST_GRADE = 1;
	static const int	LOWEST_GRADE = 150;
	const std::string	_name;
	bool	_signed;
	const int	_requiredSignGrade;
	const int	_requiredExecGrade;
	std::string	_target;
};

std::ostream&	operator<<(std::ostream& o, const AForm& rhs);

#endif
