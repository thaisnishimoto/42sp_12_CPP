/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:19:15 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/27 14:56:19 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}


//Non member functions
Base*	generate(void)
{
	int	num = (rand() % 3);

	if (num == CLASS A)
		return new A;
	else if (num == CLASS B)
		return new B;
	else
		return new C;
}

void	identify(Base* p)
{
	A	*Aptr = dynamic_cast<A*>(p);
}

void	identify(Base& p
{
}
