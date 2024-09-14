/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:53:52 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/14 00:23:22 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {

public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form& src);
	Form& operator=(const Form& rhs);
	~Form();

	std::string	getName() const;
	bool	getSignStatus() const;
	int	getSignGrade() const;
	int	getExecGrade() const;

	void	beSigned(const Bureaucrat& bureaucrat);

	class	GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
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
};

std::ostream&	operator<<(std::ostream& o, const Form& rhs);

#endif
