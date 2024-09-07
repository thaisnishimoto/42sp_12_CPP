/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:39:02 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 18:09:09 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria& src) : _type(src._type)
{
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	(void)rhs;
	return *this;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const& type) : _type(type)
{
}

std::string const&	AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "A generic Materia is trying to be used on " << target.getName() << std::endl;
}
