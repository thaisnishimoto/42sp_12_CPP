/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:44:15 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 16:10:03 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain&	Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::printFirstIdea(void) const
{
	std::cout << this->ideas[0] << std::endl;
}
