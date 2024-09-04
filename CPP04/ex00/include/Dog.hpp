/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:30:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 00:08:27 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class	Dog : public Animal {

public:
	Dog(void);
	Dog(const Dog &src);
	Dog&	operator=(const Dog& rhs);
	~Dog(void);

	void	makeSound(void) const;
};

#endif
