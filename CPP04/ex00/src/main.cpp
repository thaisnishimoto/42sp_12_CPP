/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:06:29 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/04 11:30:15 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Colors.hpp"

int main(void)
{
	{
		std::cout << BOLDCYAN << "TEST 1. Correct implementation" << RESET << std::endl;
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();
		std::cout << std::endl;
	
		std::cout << j->getType() << " enters the playroom" << std::endl;
		std::cout << i->getType() << " enters the playroom" << std::endl;
		std::cout << meta->getType() << " enters the playroom" << std::endl;
	
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
	
		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << BOLDCYAN << "TEST 2. Wrong implementation" << RESET << std::endl;
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();
		std::cout << std::endl;
	
		std::cout << i->getType() << " enters the playroom" << std::endl;
		std::cout << meta->getType() << " enters the playroom" << std::endl;
	
		i->makeSound();
		meta->makeSound();
		std::cout << std::endl;
	
		delete meta;
		delete i;
	}
	return 0;
}
