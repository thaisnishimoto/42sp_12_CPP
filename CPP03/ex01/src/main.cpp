/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:07:53 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/03 11:28:00 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "Colors.hpp"

int	main(void)
{
	ClapTrap	a("Rob");
	ScavTrap	b("Rust");
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Player's initial status*" << RESET << std::endl;
	a.printStatus();
	b.printStatus();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob tries to attack Rust*" << RESET << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rust brutally attacks Rob*" << RESET << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rob tries to attack Rust again*" << RESET << std::endl;
	a.attack(b.getName());
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Rust wins and decides to repair by retiring*" << RESET << std::endl;
	b.beRepaired(100);
	b.guardGate();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Player's final status*" << RESET << std::endl;
	a.printStatus();
	b.printStatus();
	std::cout << std::endl;
	return 0;
}
