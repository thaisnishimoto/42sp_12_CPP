/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:21:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/07 00:36:12 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < SLOTS; i++)
		this->_inventory[i] = NULL;
	Character::_characterCount++;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < SLOTS; i++)
		this->_inventory[i] = NULL;
	Character::_characterCount++;
}

Character::Character(const Character& src)
{
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
			std::cout <<  m->getType()
				  << " was successfully added to inventory" << std::endl;
			return ;
		}
	}
	std::cout << RED << this->_name << "`s inventory is full. Materia input will be deleted." << RESET << std::endl;
	delete m;
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
			std::cout << drop->getType()
				  << " was dropped on the floor" << std::endl;
			return ;
		}
	}
	std::cout << RED << "The floor is full, drop will be deleted" << RESET << std::endl;
	delete drop;
	drop = NULL;
}

void	Character::cleanFloor()
{
	bool	foundItems = false;

	if (Character::_characterCount == 0)
	{
		for (int i = 0; i < FLOOR_SIZE; i++)
		{
			if (Character::_floor[i] != NULL)
			{
				foundItems = true; 
				delete Character::_floor[i];
				Character::_floor[i] = NULL;
			}
		}
		if (foundItems)
			std::cout << "Floor has been cleaned" << std::endl;
	}
}
