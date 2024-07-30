/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:26:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/30 16:18:04 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>

class	PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);

	bool	addContact(void);
	bool	searchContact(void);

private:
	static const int	MAX_CONTACTS = 8;
	Contact	_contacts[MAX_CONTACTS];
	int	_index;

	std::string	_getData(std::string field) const;
};

#endif
