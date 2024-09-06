/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:08:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/05 23:02:51 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp" 
# include "ICharacter.hpp" 

class	Cure : public AMateria {

public:
	Cure();
	Cure(const Cure& src);
	Cure& operator=(const Cure& rhs);
	~Cure();

	AMateria*	clone() const;
	void	use(ICharacter& target);
};

#endif
