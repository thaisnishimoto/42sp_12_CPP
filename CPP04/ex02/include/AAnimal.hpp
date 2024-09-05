/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:08:26 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/05 12:09:15 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal {

public:
	AAnimal(void);
	AAnimal(const AAnimal& src);
	AAnimal&	operator=(const AAnimal& rhs);
	virtual ~AAnimal(void);

	virtual void	makeSound(void) const = 0;
	std::string	getType(void) const;

protected:
	std::string	type;
};

#endif
