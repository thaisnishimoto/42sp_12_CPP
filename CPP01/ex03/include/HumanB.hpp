/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/13 19:10:28 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon& new_weapon);

private:
	std::string	_name;
	Weapon*	_weapon;
};

#endif

