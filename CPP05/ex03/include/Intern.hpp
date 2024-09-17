/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:53:14 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 22:08:18 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern {

public:
	Intern();
	Intern(const Intern& src);
	Intern&	operator=(const Intern& rhs);
	~Intern();

	AForm*	makeForm(std::string formName, std::string target);

	class	FormNameDoesntExistException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

private:
	AForm*	_makeShrubberyForm(const std::string target);
	AForm*	_makeRobotomyForm(const std::string target);
	AForm*	_makePresidentialForm(const std::string target);
};

#endif
