/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:26:19 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/02 14:45:50 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;
	int	i;

	std::cout << "TEST 1. Lonely horde" << std::endl;
	N = 1;
	Zombie	*lonely_horde = zombieHorde(N, "Gru");
	for (i = 0; i < N; i++)
		lonely_horde[i].announce();
	delete [] lonely_horde;
	std::cout << std::endl;

	std::cout << "TEST 2. Army horde" << std::endl;
	N = 10;
	Zombie	*army_horde = zombieHorde(N, "Minion");
	for (i = 0; i < N; i++)
		army_horde[i].announce();
	delete [] army_horde;

	return (0);
}
