/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:43:55 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/26 12:14:43 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp" 

class	Point {
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const& src);
	~Point(void);

	Fixed	getX(void) const;
	Fixed	getY(void) const;

	Point&	operator=(Point const& rhs);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
