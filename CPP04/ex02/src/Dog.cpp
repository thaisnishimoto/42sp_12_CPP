/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:33:19 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/05 12:12:18 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
	this->_brain->ideas[0] = "I love playing!";
}

Dog::Dog(const Dog &src) : AAnimal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog&	Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		for (int i = 0; i < 100; i++)
			this->_brain->ideas[i] = rhs._brain->ideas[i];
	}
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": Woof Woof!" << std::endl;
}

void	Dog::showFirstIdea(void) const
{
	this->_brain->printFirstIdea();
}

void	Dog::setIdea(int pos, std::string new_idea)
{
	this->_brain->ideas[pos] = new_idea;
}
