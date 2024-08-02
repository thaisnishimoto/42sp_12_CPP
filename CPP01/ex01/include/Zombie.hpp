/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:34:29 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/02 14:40:30 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);

private:
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif

