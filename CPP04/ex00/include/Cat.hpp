/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:30:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 00:07:57 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class	Cat : public Animal {

public:
	Cat(void);
	Cat(const Cat &src);
	Cat&	operator=(const Cat& rhs);
	~Cat(void);

	void	makeSound(void) const;
};

#endif
