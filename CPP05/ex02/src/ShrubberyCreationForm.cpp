/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:47:17 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/16 11:16:58 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Form", 145, 137, "ni knights")
{
	std::cout << "Shrubbery form default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Form", 145, 137, target)
{
	std::cout << "Shrubbery form param constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src)
{
	std::cout << "Shrubbery form copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery form destructor called" << std::endl;
}

void	ShrubberyCreationForm::executeAction() const
{
	std::string	filename = this->getTarget() + "_shrubbery";
	std::ofstream	outfile(filename.c_str());

	outfile << "               ,@@@@@@@,                  " << std::endl;
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
	outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o     " << std::endl;
	outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'    " << std::endl;
	outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'    " << std::endl;
	outfile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'     " << std::endl;
	outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'       " << std::endl;
	outfile << "       |o|        | |         | |         " << std::endl;
	outfile << "       |.|        | |         | |         " << std::endl;
	outfile << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_ " << std::endl;

	outfile.close();
	std::cout << this->getName() << " has successfully created the file " << this->getTarget()
		  << "_shrubbery in the working directory." << std::endl;
}
