/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:22:54 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/14 23:24:09 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& src);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
	~PresidentialPardonForm();

	virtual void	executeAction() const;
};

#endif
