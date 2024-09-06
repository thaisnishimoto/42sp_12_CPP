/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:21:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 18:04:31 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called " << std::endl;
	for (int i = 0; i < SLOTS; i++)
		this->_inventory[i] = NULL;
	Character::_characterCount++;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character name param constructor called " << std::endl;
	for (int i = 0; i < SLOTS; i++)
		this->_inventory[i] = NULL;
	Character::_characterCount++;
}

Character::Character(const Character& src)
{
	std::cout << "Character copy constructor called " << std::endl;
	for (int i = 0; i < SLOTS; i++)
		this->_inventory[i] = NULL;
	Character::_characterCount++;
	*this = src;
}

Character&	Character::operator=(const Character& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < SLOTS; i++)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called " << std::endl;
	for (int i = 0; i < SLOTS; i++)
		delete this->_inventory[i];
	Character::_characterCount--;
	Character::cleanFloor();
}

std::string const&	Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << GREEN << m->getType() 
				  << " was successfully added to inventory"
				  << RESET << std::endl;
			return ;
		}
	}
	std::cout << RED << this->_name << "`s inventory is full" << RESET << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= SLOTS)
		std::cout << RED << "Invalid inventory slot" << RESET << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << RED << "Inventory slot is already empty" << RESET << std::endl;
	else
	{
		Character::dropOnFloor(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= SLOTS)
		std::cout << RED << "Invalid inventory slot" << RESET << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << RED << "Inventory slot is empty" << RESET << std::endl;
	else
		this->_inventory[idx]->use(target);
}

/*****Static Floor methods*****/

AMateria*	Character::_floor[FLOOR_SIZE] = {NULL};
int		Character::_characterCount = 0;

void	Character::dropOnFloor(AMateria* drop)
{
	for (int i = 0; i < FLOOR_SIZE; i++)
	{
		if (Character::_floor[i] == NULL)
		{
			Character::_floor[i] = drop;
			std::cout << GREEN << drop->getType() 
				  << " was dropped on the floor"
				  << RESET << std::endl;
			return ;
		}
	}
	std::cout << RED << "The floor is full, drop will be deleted" << RESET << std::endl;
	delete drop;
	drop = NULL;
}

void	Character::cleanFloor()
{
	if (Character::_characterCount == 0)
	{
		for (int i = 0; i < FLOOR_SIZE; i++)
		{
			if (Character::_floor[i] != NULL)
			{
				delete Character::_floor[i];
				Character::_floor[i] = NULL;
			}
		}
		std::cout << GREEN << "Floor has been cleaned" << RESET << std::endl;
	}
}