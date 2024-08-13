/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:10:00 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/13 18:18:13 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);
	std::string const&	getType(void) const;
	void		setType(std::string type);

private:
	std::string	_type;
};

#endif
