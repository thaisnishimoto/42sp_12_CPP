/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:38:27 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/30 10:54:33 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	my_phonebook;	
	std::string	user_input;

	std::cout << "Welcome to Phone Book!" << std::endl;
	while(true)
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
			my_phonebook.addContact();
	//	else if (user_input == "SEARCH")
		else if (user_input == "EXIT")
		{
			std::cout << "Thank you for using Phone Book! Until next time, take care!" << std::endl;
			break ;
		}
		else
			std::cout << "Invalid command." << std::endl;
		
	}
	return (0);
}
