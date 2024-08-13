/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/13 19:12:48 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _weapon(type)
{
	std::cout << this->_name << " is born, armed with a " << this->_weapon.getType() << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " destructed" << std::endl;
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
