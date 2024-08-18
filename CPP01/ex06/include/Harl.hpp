/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:39:34 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/18 20:02:19 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

typedef enum e_complaint {
	DEBUG,
	INFO,
	WARNING,
	ERROR
}	t_complaint;

class	Harl {

public:
	void	complainFilter(int level);
	int	selectComplaintLevel(std::string level);

private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};

#endif
