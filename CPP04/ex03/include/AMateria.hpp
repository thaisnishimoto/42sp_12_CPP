/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:08:58 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 17:04:38 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp" 
# include "Colors.hpp" 

class	AMateria {

protected:
	std::string	_type;

public:
	AMateria();
	AMateria(const AMateria& src);
	AMateria& operator=(const AMateria& rhs);
	virtual ~AMateria();
	AMateria(std::string const& type);

	std::string const&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void	use(ICharacter& target);
};

#endif
