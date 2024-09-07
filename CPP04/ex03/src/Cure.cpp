/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:04:41 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 18:10:07 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp" 

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& src) : AMateria(src)
{
}

Cure&	Cure::operator=(const Cure& rhs)
{
	(void)rhs;
	return *this;
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
