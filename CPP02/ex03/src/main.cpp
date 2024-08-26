/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:21:59 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/26 16:59:13 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(5, 0);
	Point	c(0, 5);
	
	std::cout << "Test 1. Point inside the triangle." << std::endl;
	Point	point_inside(1, 1);
	if (bsp(a, b, c, point_inside))
	    std::cout << "True" << std::endl;
	else
	    std::cout << "False" << std::endl;
	
	std::cout << "Test 2. Point outside the triangle." << std::endl;
	Point	point_outside(6, 6);
	if (bsp(a, b, c, point_outside))
	    std::cout << "True" << std::endl;
	else
	    std::cout << "False" << std::endl;
	
	std::cout << "Test 3. Point on vertex of the triangle." << std::endl;
	Point	point_on_vertex(0, 0);
	if (bsp(a, b, c, point_on_vertex))
	    std::cout << "True" << std::endl;
	else
	    std::cout << "False" << std::endl;
	
	std::cout << "Test 4. Point on edge of the triangle." << std::endl;
	Point	point_on_edge(2.5f, 0);
	if (bsp(a, b, c, point_on_edge))
	    std::cout << "True" << std::endl;
	else
	    std::cout << "False" << std::endl;
	return 0;
}
