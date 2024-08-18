/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 00:49:37 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/18 20:01:55 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <Complaint level>" << std::endl;
		return 1;
	}
	int	level = harl.selectComplaintLevel(argv[1]);
	harl.complainFilter(level);
	return 0;
}
