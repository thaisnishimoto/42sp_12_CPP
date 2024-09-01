/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:24:55 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/30 21:32:24 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream> 
# include <string>

class	FragTrap : virtual public ClapTrap {
public:
	FragTrap(void);
	FragTrap(FragTrap const& src);
	FragTrap(std::string name);
	FragTrap&	operator=(FragTrap const& rhs);
	~FragTrap(void);

	void	highFivesGuys(void);
};

#endif
