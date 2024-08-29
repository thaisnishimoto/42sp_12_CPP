/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:20:50 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/28 23:38:54 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Unamed ScavTrap", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap parameter constructor called" << std::endl;
	std::cout << this->_name << " is born" << std::endl;
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
	{
		this->_name(name) = rhs.getName();
		this->_hitPoints = rhs.getHitPoints()
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target);
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " has 0 hit points and is unable to attack." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has 0 energy points and is unable to attack." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< " inflicting " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is now in Gate Keeper mode." << std::endl;
	return ;
}
