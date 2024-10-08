/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:30:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/05 12:10:23 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal {

public:
	Cat(void);
	Cat(const Cat &src);
	Cat&	operator=(const Cat& rhs);
	~Cat(void);

	void	makeSound(void) const;
	void	showFirstIdea(void) const;
	void	setIdea(int pos, std::string new_idea);

private:
	Brain*	_brain;
};

#endif
