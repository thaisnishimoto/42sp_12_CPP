/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:34:55 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/28 23:33:27 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {

public:
	ClapTrap(void); //Default constructor
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& src); //Copy constructor
	ClapTrap&	operator=(ClapTrap const& rhs); //Assignment operator
	~ClapTrap(void); //Destructor

	std::string	getName(void) const;
	int	getHitPoints(void) const;
	int	getEnergyPoints(void) const;
	int	getAttackDamage(void) const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
	ClapTrap(std::string name, int hp, int ep, int ad);

private:
	std::string	_name;
	int	_hitPoints;
	int	_energyPoints;
	int	_attackDamage;
};

#endif
