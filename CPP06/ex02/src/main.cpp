/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:54:56 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/27 23:07:20 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Colors.hpp"

int	main()
{
//	//seed rand
//	srand(time(NULL));
//
//	Base*	randomClass = generate();
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
//	{
//		std::cout << YELLOW << "Identify each class" << RESET << std::endl;
//		Base&	a = A();
//		identify(a);
//		Base&	b = B();
//		identify(b);
//		Base&	c = C();
//		identify(c);
//	}
	return 0;
}
