/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:27:36 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/25 20:38:16 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {

public:
	Fixed(void); //Default constructor
	Fixed(int const num); //Int constructor
	Fixed(float const num); //Float constructor
	Fixed(Fixed const& src); //Copy constructor - creates new instance
	~Fixed(void); //Destructor

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	int	toInt(void) const;
	float	toFloat(void) const;

	Fixed&	operator=(Fixed const& rhs); //Copy assignment - updates current instance

	bool	operator>(Fixed const& rhs) const;
	bool	operator<(Fixed const& rhs) const;
	bool	operator>=(Fixed const& rhs) const;
	bool	operator<=(Fixed const& rhs) const;
	bool	operator==(Fixed const& rhs) const;
	bool	operator!=(Fixed const& rhs) const;

	Fixed	operator+(Fixed const& rhs) const;
	Fixed	operator-(Fixed const& rhs) const;
	Fixed	operator*(Fixed const& rhs) const;
	Fixed	operator/(Fixed const& rhs) const;

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	static const Fixed&	min(Fixed const& num1, Fixed const& num2);
	static Fixed&	min(Fixed& num1, Fixed& num2);
	static const Fixed&	max(Fixed const& num1, Fixed const& num2);
	static Fixed&	max(Fixed& num1, Fixed& num2);
private:
	int	_rawValue;
	static const int	_FRACTIONAL_BITS = 8;	
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif
