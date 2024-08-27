/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:25:13 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/26 21:20:33 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Determinant formula:
// area = abs 0.5 |(x1 - y2) (x1 - x3)|
//                |(y1 - y2) (y1 - y3)|
Fixed	calcArea(Point const a, Point const b, Point const c)
{
	Fixed	area = ((a.getX() - b.getX()) * (a.getY() - c.getY()) -
			(a.getY() - b.getY()) * (a.getX() - c.getX())) / Fixed(2); 
	if (area < 0)
		area = area * Fixed(-1); 
	return area;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	totalArea = calcArea(a, b, c);
	Fixed	subArea1 = calcArea(point, b, c);
	Fixed	subArea2 = calcArea(a, point, c);
	Fixed	subArea3 = calcArea(a, b, point);

	if (subArea1 == Fixed(0) || subArea2 == Fixed(0) || subArea3 == Fixed(0))
		return false;
	return (subArea1 + subArea2 + subArea3 == totalArea);
}
