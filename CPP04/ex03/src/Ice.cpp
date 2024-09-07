/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:04:41 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 18:10:20 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp" 

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& src) : AMateria(src)
{
}

Ice&	Ice::operator=(const Ice& rhs)
{
	(void)rhs;
	return *this;
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
