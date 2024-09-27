/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:05:12 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/27 14:55:56 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib> // For std::rand() and std::srand()
#include <ctime>   // For std::time()
#include <iostream>   

enum	classOptions {
	CLASS_A,
	CLASS_B
	CLASS_C
};

class	Base {

public:
	virtual ~Base();
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p)

#endif
