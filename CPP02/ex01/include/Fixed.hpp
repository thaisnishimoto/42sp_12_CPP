/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:27:36 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/23 15:47:24 by tmina-ni         ###   ########.fr       */
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

	Fixed&	operator=(Fixed const& rhs); //Copy assignment - updates current instance

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	int	toInt(void) const;
	float	toFloat(void) const;

private:
	int	_rawValue;
	static const int	_FRACTIONAL_BITS = 8;	
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif
