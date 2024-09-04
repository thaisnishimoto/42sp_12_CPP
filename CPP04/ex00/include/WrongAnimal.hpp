/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:08:26 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 11:03:48 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal {

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& src);
	WrongAnimal&	operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal(void);

	void	makeSound(void) const;
	std::string	getType(void) const;

protected:
	std::string	type;
};

#endif
