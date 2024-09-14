/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:58:05 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/14 00:22:12 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(std::string name, int initialGrade);
	Bureaucrat(const Bureaucrat& src);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat();

	std::string	getName() const;
	int	getGrade() const;

	void	incrementGrade();
	void	decrementGrade();

	void	signForm(Form& form);

	class	GradeTooHighException : public std::exception	{
	public:
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception	{
	public:
		virtual const char* what() const throw();
	};

private:	
	static const int	HIGHEST_GRADE = 1;
	static const int	LOWEST_GRADE = 150;
	const std::string	_name;
	int	_grade;
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
