/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:15:06 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/13 19:22:19 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::Weapon(void)
{
	return;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->_type << " destruced" << std::endl;
	return;
}

std::string const&	Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
	return;
}
