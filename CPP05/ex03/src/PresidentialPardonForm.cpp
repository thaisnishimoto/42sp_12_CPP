/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:47:11 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 17:01:22 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5, "John Doe")
{
	std::cout << "Presidential form default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 25, 5, target)
{
	std::cout << "Presidential form param constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src)
{
	std::cout << "Presidential form copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential form destructor called" << std::endl;
}

void	PresidentialPardonForm::executeAction() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
