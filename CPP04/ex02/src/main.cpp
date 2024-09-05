/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:06:29 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/05 12:18:32 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Colors.hpp"

int main(void)
{
	{
		std::cout << BOLDGREEN << "TEST 1. Correct destructors called" << RESET << std::endl;
		AAnimal*	pets[4];
	
		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				pets[i] = new Dog();
			else
				pets[i] = new Cat();
		}
		std::cout << std::endl;

		for (int i = 0; i < 4; i++)
			delete pets[i];
	}
	{
		std::cout << std::endl;
		std::cout << BOLDGREEN << "TEST 2. Deep copy" << RESET << std::endl;

		Dog*	dog1 = new Dog();
		Dog*	dog2 = new Dog(*dog1);
		Dog*	dog3  = new Dog();
		*dog3 = *dog2;
		std::cout << std::endl;

		std::cout << "Dog 1: "; 
		dog1->showFirstIdea();
		std::cout << "Dog 2: ";
		dog2->showFirstIdea();
		std::cout << "Dog 3: ";
		dog3->showFirstIdea();
		std::cout << std::endl;
		
		std::cout << BOLD << "*A change in dog1`s idea, should't change the other's mind*" << RESET << std::endl;
		dog1->setIdea(0, "Chase the ball!");
		std::cout << "Dog 1: ";
		dog1->showFirstIdea();
		std::cout << "Dog 2: ";
		dog2->showFirstIdea();
		std::cout << "Dog 3: ";
		dog3->showFirstIdea();
		std::cout << std::endl;
		
		std::cout << BOLD << "*A change in dog2`s idea, should't change the other's mind*" << RESET << std::endl;
		dog2->setIdea(0, "Chase the cat!");
		std::cout << "Dog 1: ";
		dog1->showFirstIdea();
		std::cout << "Dog 2: ";
		dog2->showFirstIdea();
		std::cout << "Dog 3: ";
		dog3->showFirstIdea();
		std::cout << std::endl;

		delete dog1;
		delete dog2;
		delete dog3;
	}
//	{
//		std::cout << BOLDGREEN << "TEST 3. Try to instantiate abstract class" << RESET << std::endl;
//		AAnimal	pet;
//	}
	return 0;
}
