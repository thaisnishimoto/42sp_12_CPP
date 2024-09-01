/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:34:38 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/31 17:08:06 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called for " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
: _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad)
{
	std::cout << "ClapTrap parameterized constructor called for " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

int	ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int	ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " can't attack since it has no hit points left." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy left to attack." << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << target << ", causing "
		<< this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << this->_name << " has taken " << amount << " of damage and now has "
		<< this->_hitPoints << " of health." << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << this->_name << " repaired itself by " << amount << " and now has "
		<< this->_hitPoints << " of health." << std::endl;
	}
	else
		std::cout << this->_name << " has no energy left to repair itself." << std::endl;
	return ;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	ClapTrap::setHitPoints(int hp)
{
	this->_hitPoints = hp;
	return ;
}

void	ClapTrap::setEnergyPoints(int ep)
{
	this->_energyPoints = ep;
	return ;
}

void	ClapTrap::setAttackDamage(int ad)
{
	this->_attackDamage = ad;
	return ;
}

void	ClapTrap::printStatus(void) const
{
	std::cout << this->_name << " currently has " << this->_hitPoints << " of health, "
	<< this->_energyPoints << " of energy points and " << this->_attackDamage 
	<< " of attack damage." << std::endl;
}