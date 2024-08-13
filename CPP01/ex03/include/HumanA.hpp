/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:22:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/13 18:49:37 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon& type);
	~HumanA(void);
	void	attack(void);

private:
	std::string	_name;
	Weapon&	_weapon;
};

#endif

