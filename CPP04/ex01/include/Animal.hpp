/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:08:26 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 00:06:36 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal {

public:
	Animal(void);
	Animal(const Animal& src);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal(void);

	virtual void	makeSound(void) const;
	std::string	getType(void) const;

protected:
	std::string	type;
};

#endif
