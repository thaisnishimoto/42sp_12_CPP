/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:33:19 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 17:09:51 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
	this->_brain->ideas[0] = "I am bored";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Cat&	Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		for (int i = 0; i < 100; i++)
			this->_brain->ideas[i] = rhs._brain->ideas[i];
	}
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": Meooow!" << std::endl;
}

void	Cat::showFirstIdea(void) const
{
	this->_brain->printFirstIdea();
}

void	Cat::setIdea(int pos, std::string new_idea)
{
	this->_brain->ideas[pos] = new_idea;
}
