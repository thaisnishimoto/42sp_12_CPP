/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/13 19:17:20 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << this->_name << " is born, unarmed" << std::endl;
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " destructed" << std::endl;
	return;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon == NULL)
		std::cout << "bare hands" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	this->_weapon = &new_weapon;	
}
