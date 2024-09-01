/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:14:33 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/30 21:32:33 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {

public:
	ScavTrap(void); //Default constructor
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& src); //Copy constructor
	ScavTrap&	operator=(ScavTrap const& rhs); //Assignment operator
	~ScavTrap(void); //Destructor

	void	attack(const std::string& target);
	void	guardGate(void);
};

#endif
