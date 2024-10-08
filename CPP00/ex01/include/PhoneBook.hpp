/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:26:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/31 10:47:09 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <cstdlib>

class	PhoneBook {

public:
	PhoneBook(int num);
	~PhoneBook(void);

	bool	addContact(void);
	void	searchContact(void) const;

private:
	static const int	MAX_CONTACTS = 8;
	Contact	_contacts[MAX_CONTACTS];
	int	_index;

	std::string	_getInputData(std::string field) const;
	void	_displayContactList(void) const;
	std::string	_truncateData(std::string data) const;
};

#endif
