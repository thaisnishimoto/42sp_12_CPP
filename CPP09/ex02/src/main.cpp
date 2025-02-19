/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <thaismnishimoto@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:40:35 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/21 12:40:39 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cerr << "Usage: ./PmergeMe <sequence of unique positive integers>" << std::endl;
		return 1;
	}
	try {
		PmergeMe pm;
        pm.validateInput(argc, argv);
        pm.sortControl(argc, argv);
        pm.sortVector(argc, argv);
        pm.sortDeque(argc, argv);
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}