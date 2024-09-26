/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:34:18 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/26 18:10:44 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& src)
{
	(void)src;
}

Serializer&	Serializer::operator=(const Serializer& rhs)
{
	(void)rhs;
	return *this;
}

Serializer::~Serializer()
{
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	std::cout << "Data serialization complete" << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	std::cout << "Data deserialization complete" << std::endl;
	return reinterpret_cast<Data*>(raw);
}
