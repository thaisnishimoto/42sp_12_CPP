/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:45:49 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 18:04:40 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < MEMORY_SIZE; i++)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < MEMORY_SIZE; i++)
		this->_memory[i] = NULL;
	*this = src;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < MEMORY_SIZE; i++)
		{
			delete this->_memory[i];
			this->_memory[i] = NULL;
			if (rhs._memory[i])
				this->_memory[i] = rhs._memory[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < MEMORY_SIZE; i++)
		delete this->_memory[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MEMORY_SIZE; i++)
	{
		if (this->_memory[i] == NULL)
		{
			this->_memory[i] = m;
			return;
		}
	}
	std::cout << RED << "Memory is full, can't learn new materias" << RESET << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < MEMORY_SIZE; i++)
	{
		if (this->_memory[i] && type.compare(this->_memory[i]->getType()) == 0) 
			return this->_memory[i]->clone();
	}
	std::cout << RED << "Unkown type, cannot create materia" << RESET << std::endl;
	return 0;
}
