/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:38:27 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/30 18:15:20 by tmina-ni         ###   ########.fr       */
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
		if (!std::cin)
		{
			std::cout << std::endl << "Goodbye!" << std::endl;
			break ;
		}
		else if (user_input == "ADD")
		{
			if (!my_phonebook.addContact())
			{
				std::cout << std::endl << "Goodbye!" << std::endl;
				break ;
			}
		}
		else if (user_input == "SEARCH")
		{
			my_phonebook.searchContact();
		}
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
