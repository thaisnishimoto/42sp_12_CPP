/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:26:19 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/02 00:23:32 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie = newZombie("HeapHopper");
	heap_zombie->announce();

	randomChump("StackWalker");

	delete heap_zombie;
	return (0);
}
