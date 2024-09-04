/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:30:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 16:54:53 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {

public:
	Dog(void);
	Dog(const Dog &src);
	Dog&	operator=(const Dog& rhs);
	~Dog(void);

	void	makeSound(void) const;
	void	showFirstIdea(void) const;
	void	setIdea(int pos, std::string new_idea);

private:
	Brain*	_brain;
};

#endif
