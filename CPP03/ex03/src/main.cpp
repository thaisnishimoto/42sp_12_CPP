/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:07:53 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/31 18:08:25 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "Colors.hpp"

int	main(void)
{
	DiamondTrap	d("Frankie");
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Player's initial status*" << RESET << std::endl;
	d.printStatus();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Frankie presents himself*" << RESET << std::endl;
	d.whoAmI();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Frankie shows he has the same special functions as his parents*" << RESET << std::endl;
	d.guardGate();
	d.highFivesGuys();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Finally, Frankie attacks the enemy*" << RESET << std::endl;
	d.attack("enemy");
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Player's final status*" << RESET << std::endl;
	d.printStatus();
	std::cout << std::endl;
	return 0;
}
