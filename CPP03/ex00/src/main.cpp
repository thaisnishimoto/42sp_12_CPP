/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:07:53 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/28 11:46:56 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors.hpp"

int	main(void)
{
	ClapTrap	a("Rob");
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob attacks enemy 5 times*" << RESET << std::endl;
	for (int i = 0; i < 5; i++)
		a.attack("enemy");
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob takes 8 points of damage*" << RESET << std::endl;
	a.takeDamage(8);
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob repairs 3 points of health*" << RESET << std::endl;
	a.beRepaired(3);
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob attacks until is has no more energy*" << RESET << std::endl;
	for (int i = 0; i < 5; i++)
		a.attack("enemy");
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob tries to repair more of his health*" << RESET << std::endl;
	a.beRepaired(3);
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob takes 100 points of damage*" << RESET << std::endl;
	a.takeDamage(100);
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob tries to attack one last time*" << RESET << std::endl;
	a.attack("enemy");
	std::cout << std::endl;
	return 0;
}
