/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:58:05 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/14 22:05:59 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"

class	AForm;

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

	void	signForm(AForm& form);
	void	executeForm(AForm const & form);

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
