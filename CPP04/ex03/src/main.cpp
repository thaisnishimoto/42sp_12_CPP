/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:05:30 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/07 00:30:59 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	{
		std::cout << BOLD << "*TEST 1. Subject*" << RESET << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl << std::endl;
		std::cout << BOLD << "*TEST 2. MateriaSource Usage*" << RESET << std::endl;

		std::cout << YELLOW << "---Adding 5 materias shouln't fit---" << RESET << std::endl;
		IMateriaSource* src = new MateriaSource();
		for (int i = 0; i < 5; i++)
			src->learnMateria(new Ice());

		std::cout << YELLOW << "---Trying to create a materia that hasn't been learned---" << RESET << std::endl;
		AMateria* tmp;
		tmp = src->createMateria("cure");
		tmp = src->createMateria("type_x");
		std::cout << "createMateria return value: " << tmp << std::endl;

		delete src;
	}
	{
		std::cout << std::endl << std::endl;
		std::cout << BOLD << "*TEST 3. Inventory Deep Copy*" << RESET << std::endl;

		std::cout << YELLOW << "---Ed equips an ice---" << RESET << std::endl;
		Character* ed = new Character("edward");
		AMateria* tmp;
		tmp = new Ice();
		ed->equip(tmp);	

		std::cout << YELLOW << "---Edd is created as a copy of Ed---" << RESET << std::endl;
		Character* edd = new Character(*ed);
		edd->use(0, *ed);

		std::cout << YELLOW << "---Ed is assigned to Eddy---" << RESET << std::endl;
		Character* eddy = new Character("eddy");
		*eddy = *ed;
		eddy->use(0, *ed);

		std::cout << YELLOW << "---Changind Ed inventory doen't change the others---" << RESET << std::endl;
		ed->unequip(0);
		edd->use(0, *eddy);
		eddy->use(0, *edd);

		delete ed;
		delete edd;
		delete eddy;
	}
	{
		std::cout << std::endl << std::endl;
		std::cout << BOLD << "*TEST 4. Character Habilities*" << RESET << std::endl;
		ICharacter* me = new Character("Thais");

		std::cout << YELLOW << "---Unable to unequip empty inventory---" << RESET << std::endl;
		me->unequip(0);

		std::cout << YELLOW << "---Unable to unequip invalid slot---" << RESET << std::endl;
		me->unequip(5);

		std::cout << YELLOW << "---Unequip should not delete materia---" << RESET << std::endl;
		AMateria* mat;
		mat = new Ice();
		me->equip(mat);
		me->unequip(0);
		std::cout << "Materia that was unequipped is of type: " << mat->getType() << std::endl;
		
		std::cout << YELLOW << "---Adding 5 materias shouln't fit---" << RESET << std::endl;
		for (int i = 0; i < 5; i++)
		{
			AMateria* tmp;
			tmp = new Cure();
			me->equip(tmp);
		}

		delete me;
	}
	return 0;
}
