/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:26:19 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/02 12:24:01 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int	num;
	int	i;

	std::cout << "TEST 1. Lonely horde" << std::endl;
	num = 1;
	Zombie	*small_horde = zombieHorde(num, "Gru");
	for (i = 0; i < num, i++)
		small_horde[i]->announce();
	delete [] small_horde;

	std::cout << "TEST 2. Army horde" << std::endl;
	num = 10;
	Zombie	*army_horde = zombieHorde(num, "Minion");
	for (i = 0; i < num, i++)
		army_horde[i]->announce();
	delete [] army_horde;

	return (0);
}
