/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:19:15 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/27 18:21:37 by tmina-ni         ###   ########.fr       */
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
	int	random = (rand() % 3);

	if (random == CLASS_A)
		return new A();
	else if (random == CLASS_B)
		return new B();
	else
		return new C();
}

void	identify(Base* p)
{
	A*	aPtr = dynamic_cast<A*>(p);
	if (aPtr != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}

	B*	bPtr = dynamic_cast<B*>(p);
	if (bPtr != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}

	C*	cPtr = dynamic_cast<C*>(p);
	if (cPtr != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

//bool	isA(Base& p)
//{
//	try
//	{
//		A& aRef = dynamic_cast<A&>(p);
//		return true;
//	}
//	catch (const std::bad_cast& bc)
//	{
//		return false;
//	}
//}

//bool	isB(Base& p)
//{
//	try
//	{
//		B& bRef = dynamic_cast<B&>(p);
//		return true;
//	}
//	catch (const std::bad_cast& bc)
//	{
//		return false;
//	}
//}
//
//bool	isC(Base& p)
//{
//	try
//	{
//		C& cRef = dynamic_cast<C&>(p);
//		return true;
//	}
//	catch (const std::bad_cast& bc)
//	{
//		return false;
//	}
//}

//void	identify(Base& p)
//{
//	if (isA(p))
//		std::cout << "A" << std::endl;
//	else if (isB(p))
//		std::cout << "B" << std::endl;
//	else if (isC(p))
//		std::cout << "C" << std::endl;
//}
