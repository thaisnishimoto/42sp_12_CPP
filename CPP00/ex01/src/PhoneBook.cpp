/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:24:53 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/30 23:32:54 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int num) : _index(num)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

std::string	PhoneBook::_getInputData(std::string field) const
{
	std::string	data;

	while (data.empty())
	{
		std::cout << "*Enter " << field << ": ";
		std::getline(std::cin, data);
		if (!std::cin)
			return ("");
		if (data.empty())
			std::cout << "Field can't be empty. " << std::endl;
	}
	return (data);
}

bool	PhoneBook::addContact(void)
{
	Contact	new_contact("");
	std::string	contact_data;

	contact_data = PhoneBook::_getInputData("first name");
	new_contact.setFirstName(contact_data);
	contact_data = PhoneBook::_getInputData("last name");
	new_contact.setLastName(contact_data);
	contact_data = PhoneBook::_getInputData("nickname");
	new_contact.setNickname(contact_data);
	contact_data = PhoneBook::_getInputData("phone number");
	new_contact.setPhoneNumber(contact_data);
	contact_data = PhoneBook::_getInputData("darkest secret");
	new_contact.setDarkestSecret(contact_data);

	if (contact_data.empty())
		return (false);
	this->_contacts[this->_index % PhoneBook::MAX_CONTACTS] = new_contact;
	this->_index++;
	std::cout << "New contact has been successfully added!" << std::endl;
	std::cout << std::endl;
	return (true);
}

std::string	PhoneBook::_truncateData(std::string data) const
{
	std::string	trunc_data;

	if (data.length() > 10)
	{
		trunc_data = data.substr(0, 10);
		trunc_data.replace(9, 1, ".");
	}
	return (trunc_data);
}

void	PhoneBook::searchContact(void) const
{
	this->_displayContactList();
}

void	PhoneBook::_displayContactList(void) const
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < PhoneBook::MAX_CONTACTS; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1 << "|";
		std::cout << std::setw(10) << std::right << this->_truncateData(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << this->_truncateData(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << this->_truncateData(this->_contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << std::endl;
}
