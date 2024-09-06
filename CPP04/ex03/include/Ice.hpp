/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:08:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/05 23:31:41 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp" 
# include "ICharacter.hpp" 

class	Ice : public AMateria {

public:
	Ice();
	Ice(const Ice& src);
	Ice& operator=(const Ice& rhs);
	~Ice();

	AMateria*	clone() const;
	void	use(ICharacter& target);
};

#endif
