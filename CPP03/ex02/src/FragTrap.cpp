/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:24:22 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/31 16:05:50 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap parameterized constructor called for " << this->getName() << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called for " << this->getName() << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " requests hith fives!!!" << std::endl;
	return ;
}
