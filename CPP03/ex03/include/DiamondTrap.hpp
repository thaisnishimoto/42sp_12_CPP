/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:00:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/31 17:05:35 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class	DiamondTrap : public ScavTrap, public FragTrap {

public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& src);
	DiamondTrap&	operator=(DiamondTrap const& rhs);
	~DiamondTrap(void);

	void	attack(const std::string& target);
	void	whoAmI(void);

private:
	std::string	_name;
};

#endif
