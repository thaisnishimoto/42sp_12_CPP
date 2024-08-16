/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:39:12 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/16 01:14:56 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "*DEBUG MESSAGE*" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-"
		<< "triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::_info(void)
{
	std::cout << "*INFO MESSAGE*" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
		<< "You didn’t put enough bacon in my burger!"
		<< "If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "*WARNING MESSAGE*" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::_error(void)
{
	std::cout << "*ERROR MESSAGE*" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complaintPtr[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complaintPtr[i])();
			break ;
		}
	}
	return ;
}
