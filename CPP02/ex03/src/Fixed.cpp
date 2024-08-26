/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:26:59 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/25 20:54:52 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawValue(0)
{
	return ;
}

Fixed::Fixed(int const num)
{
	this->_rawValue = num << Fixed::_FRACTIONAL_BITS;
	return ;
}

Fixed::Fixed(float const num)
{
	this->_rawValue = static_cast<int>(roundf(num * (1 << Fixed::_FRACTIONAL_BITS)));
	return ;
}

Fixed::Fixed(Fixed const& src)
{
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
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

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	if (this != &rhs)
		this->_rawValue = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const& rhs) const
{
	if (this->_rawValue > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const& rhs) const
{
	if (this->_rawValue < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const& rhs) const
{
	if (this->_rawValue >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const& rhs) const
{
	if (this->_rawValue <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const& rhs) const
{
	if (this->_rawValue == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const& rhs) const
{
	if (this->_rawValue != rhs.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits(this->_rawValue + rhs.getRawBits());
	return result;
}

Fixed	Fixed::operator-(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits(this->_rawValue - rhs.getRawBits());
	return result;
}

//For fixed-point multiplication, multiply the two integers. The scaling factor of the result
//is the product of their scaling factors. The result is scaled by S^2, so to store in the corret
// scale, reapply the right bit shift.
Fixed	Fixed::operator*(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits((this->_rawValue * rhs.getRawBits()) >> Fixed::_FRACTIONAL_BITS);
	return result;
}

// For fixed-point division, divide the raw integer values of the two numbers.
// The division will result in an unscaled value. To correct this, 
// we first scale the numerator by shifting it left by _FRACTIONAL_BITS before
// performing the division. This ensures the result is properly scaled to be stored
// and retains precision when stored as a fixed-point number.
Fixed	Fixed::operator/(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits((this->_rawValue << Fixed::_FRACTIONAL_BITS) / rhs.getRawBits());
	return result;
}

Fixed&	Fixed::operator++(void)
{
	this->_rawValue++;
	return *this;
}

//Post increment uses a dummy int parameter to differentiate
Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->_rawValue++;
	return temp;
}

Fixed&	Fixed::operator--(void)
{
	this->_rawValue--;
	return *this;
}

//Post decrement uses a dummy int parameter to differentiate
Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->_rawValue--;
	return temp;
}

const Fixed&	Fixed::min(Fixed const& num1, Fixed const& num2)
{
	std::cout << "Const min function called" << std::endl;
	if (num1.getRawBits() < num2.getRawBits())
		return num1;
	return num2;
}

Fixed&	Fixed::min(Fixed& num1, Fixed& num2)
{
	std::cout << "Min function called" << std::endl;
	if (num1.getRawBits() < num2.getRawBits())
		return num1;
	return num2;
}

const Fixed&	Fixed::max(Fixed const& num1, Fixed const& num2)
{
	std::cout << "Const max function called" << std::endl;
	if (num1.getRawBits() > num2.getRawBits())
		return num1;
	return num2;
}

Fixed&	Fixed::max(Fixed& num1, Fixed& num2)
{
	std::cout << "Max function called" << std::endl;
	if (num1.getRawBits() > num2.getRawBits())
		return num1;
	return num2;
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return o;
}
