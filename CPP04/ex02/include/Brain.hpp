/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:38:13 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 16:04:17 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain {

public:
	Brain(void);
	Brain(const Brain& src);
	Brain&	operator=(const Brain& src);
	~Brain(void);

	std::string	ideas[100];
	void	printFirstIdea(void) const;
};

#endif
