/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:54:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/27 23:58:15 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Colors.hpp"

int	main()
{
	{
		std::cout << YELLOW << "Identify each class by ptr" << RESET << std::endl;
		Base*	a = new A();
		identify(a);
		Base	*b = new B();
		identify(b);
		Base	*c = new C();
		identify(c);

		delete a;
		delete b;
		delete c;
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Identify each class by reference" << RESET << std::endl;
		A	a;
		Base&	aRef = a;
		identify(aRef);
		B	b;
		Base&	bRef = b;
		identify(bRef);
		C	c;
		Base&	cRef = c;
		identify(cRef);
	}
	{
//		std::cout << std::endl;
//		std::cout << YELLOW << "Identify each class by reference" << RESET << std::endl;
//	//seed rand
//	srand(time(NULL));
//
//	Base*	randomClass = generate();
	}
	return 0;
}
