/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:20:50 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/03 11:42:39 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called for " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " has 0 hit points and is unable to attack." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has 0 energy points and is unable to attack." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< " inflicting " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is now in Gate Keeper mode." << std::endl;
	return ;
}
