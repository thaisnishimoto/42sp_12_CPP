/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:24:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/15 23:44:02 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "AForm.hpp"
# include <cstdlib> // For std::rand() and std::srand()
# include <ctime>   // For std::time()

class	RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& src);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
	~RobotomyRequestForm();

	virtual void	executeAction() const;

private:
	static bool	_isSeeded;
	static void	_seedRandomGenerator();
};

#endif
