/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:07:53 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/29 23:53:27 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "Colors.hpp"

int	main(void)
{
	ClapTrap	a("Clapy");
	ScavTrap	b("Scavy");
	FragTrap	c("Fragy");
	FragTrap	d;
	d = c;
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Player's initial status*" << RESET << std::endl;
	a.printStatus();
	b.printStatus();
	d.printStatus();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Clapy tries to attack Scavy and Fragy*" << RESET << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.attack(d.getName());
	d.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Scavy brutally attacks Clapy and Fragy*" << RESET << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	b.attack(d.getName());
	d.takeDamage(b.getAttackDamage());
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Fragy doesn't wanto to fight and asks for high fives*" << RESET << std::endl;
	d.highFivesGuys();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Scavy decides to go guard the gate instead*" << RESET << std::endl;
	b.guardGate();
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "*Player's final status*" << RESET << std::endl;
	a.printStatus();
	b.printStatus();
	d.printStatus();
	std::cout << std::endl;
	return 0;
}
