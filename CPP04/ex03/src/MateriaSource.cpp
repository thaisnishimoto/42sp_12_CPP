/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:45:49 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 18:43:29 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MEMORY_SIZE; i++)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
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
	std::cout << RED << "Memory is full, can't learn new materias. Materia input will be deleted." << RESET << std::endl;
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < MEMORY_SIZE; i++)
	{
		if (this->_memory[i] && type.compare(this->_memory[i]->getType()) == 0) 
			return this->_memory[i]->clone();
	}
	std::cout << RED << type << " is an unkown type, failed to create materia" << RESET << std::endl;
	return 0;
}
