/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:30:04 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 11:02:31 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(const WrongCat &src);
	WrongCat&	operator=(const WrongCat& rhs);
	~WrongCat(void);

	void	makeSound(void) const;
};

#endif
