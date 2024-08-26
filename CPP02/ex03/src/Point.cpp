/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:43:31 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/26 16:57:51 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const& src)
{
	*this = src;
	return ;
}

Point::~Point(void)
{
	return ;
}

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

Point&	Point::operator=(Point const& rhs)
{
	if (this != &rhs)
	{
		(Fixed&)this->_x = rhs.getX();
		(Fixed&)this->_y = rhs.getY();
	}
	return *this;
}
