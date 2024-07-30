/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:24:53 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/30 14:59:47 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

std::string	PhoneBook::_getData(std::string field) const
{
	std::string	data;

	while (data.empty())
	{
		std::cout << "Enter " << field << ": ";
		std::getline(std::cin, data);
		if (data.empty())
			std::cout << "Field can't be empty. " << std::endl;
	}
	return (data);
}

void	PhoneBook::addContact(void)
{
	Contact	new_contact("");
	std::string	contact_data;

	contact_data = PhoneBook::_getData("first name");
	new_contact.setFirstName(contact_data);
	contact_data = PhoneBook::_getData("last name");
	new_contact.setLastName(contact_data);
	contact_data = PhoneBook::_getData("nickname");
	new_contact.setNickname(contact_data);
	contact_data = PhoneBook::_getData("phone number");
	new_contact.setPhoneNumber(contact_data);
	contact_data = PhoneBook::_getData("darkest secret");
	new_contact.setDarkestSecret(contact_data);

	this->_contacts[this->_index % PhoneBook::MAX_CONTACTS] = new_contact;
	this->_index++;
	std::cout << "New contact has been successfully added!" << std::endl;
}
