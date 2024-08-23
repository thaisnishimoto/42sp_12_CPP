/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:26:59 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/23 15:59:27 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawValue = num << Fixed::_FRACTIONAL_BITS;
	return ;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawValue = static_cast<int>(roundf(num * (1 << Fixed::_FRACTIONAL_BITS)));
	return ;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawValue = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->_rawValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawValue = raw;
	return ;
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> Fixed::_FRACTIONAL_BITS);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << Fixed::_FRACTIONAL_BITS));
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return o;
}
