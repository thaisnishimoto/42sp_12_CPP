/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:24:53 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/30 12:50:09 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string empty) :
	_firstName(empty),
	_lastName(empty),
	_nickname(empty),
	_phoneNumber(empty),
	_darkestSecret(empty)
{
	return ;
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickame(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

bool	Contact::setFirstName(std::string input)
{
	if (input.empty())
	{
		std::cout << "A contact can’t have empty fields." << std::endl;
		return (false);
	}
	this->_firstName = input;
	return (true);
}

bool	Contact::setLastName(std::string input)
{
	if (input.empty())
	{
		std::cout << "A contact can’t have empty fields." << std::endl;
		return (false);
	}
	this->_lastName = input;
	return (true);
}

bool	Contact::setNickname(std::string input)
{
	if (input.empty())
	{
		std::cout << "A contact can’t have empty fields." << std::endl;
		return (false);
	}
	this->_nickname = input;
	return (true);
}

bool	Contact::setPhoneNumber(std::string input)
{
	if (input.empty())
	{
		std::cout << "A contact can’t have empty fields." << std::endl;
		return (false);
	}
	this->_phoneNumber = input;
	return (true);
}

bool	Contact::setDarkestSecret(std::string input)
{
	if (input.empty())
	{
		std::cout << "A contact can’t have empty fields." << std::endl;
		return (false);
	}
	this->_darkestSecret = input;
	return (true);
}
