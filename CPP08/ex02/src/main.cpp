/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:34:40 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/08 21:30:17 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int	main(void)
{
	{
	std::cout << YELLOW << "Test 1. Subject test" << RESET << std::endl;
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 2. Replace MutantStack with std::list" << RESET << std::endl;
		std::list<int>	intList;

		intList.push_back(5);
		intList.push_back(17);

		std::cout << intList.back() << std::endl;

		intList.pop_back();

		std::cout << intList.size() << std::endl;
		intList.push_back(3);
		intList.push_back(5);
		intList.push_back(737);
		intList.push_back(0);

		std::list<int>::iterator	it = intList.begin();
		std::list<int>::iterator	ite = intList.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 3. MutantStack of int as list" << RESET << std::endl;
		MutantStack<int, std::list<int> >	mstack;

		std::cout << "Stack is empty: " << std::boolalpha << mstack.empty() << std::endl;
		mstack.push(0);
		mstack.push(1);
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);

		std::cout << "top: " << mstack.top() << std::endl;
		std::cout << "Remove top" << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;


		std::cout << "Iterate over stack: ";
		MutantStack<int, std::list<int> >::iterator it = mstack.begin();
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		std::cout << "Reverse iterate over stack: ";
		MutantStack<int, std::list<int> >::reverse_iterator rev_it = mstack.rbegin();
		MutantStack<int, std::list<int> >::reverse_iterator rev_ite = mstack.rend();
		++rev_it;
		--rev_it;
		while (rev_it != rev_ite)
		{
			std::cout << *rev_it << " ";
			++rev_it;
		}
		std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 4. MutantStack of char as vector" << RESET << std::endl;
		MutantStack<char, std::vector<char> >	mstack;

		std::cout << "Stack is empty: " << std::boolalpha << mstack.empty() << std::endl;
		mstack.push('a');
		mstack.push('b');
		mstack.push('c');
		mstack.push('d');
		mstack.push('e');

		std::cout << "top: " << mstack.top() << std::endl;
		std::cout << "Remove top" << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;


		std::cout << "Iterate over stack: ";
		MutantStack<char, std::vector<char> >::iterator it = mstack.begin();
		MutantStack<char, std::vector<char> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		std::cout << "Reverse iterate over stack: ";
		MutantStack<char, std::vector<char> >::reverse_iterator rev_it = mstack.rbegin();
		MutantStack<char, std::vector<char> >::reverse_iterator rev_ite = mstack.rend();
		++rev_it;
		--rev_it;
		while (rev_it != rev_ite)
		{
			std::cout << *rev_it << " ";
			++rev_it;
		}
		std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "Test 5. Deep copy" << RESET << std::endl;
		MutantStack<std::string> mstack1;
		mstack1.push("mstack1");
	
		MutantStack<std::string>	mstack2(mstack1);
		mstack2.push("mstack2");
	
		std::cout << "MutantStack 1 size is: " << mstack1.size() << std::endl;
		std::cout << "MutantStack 2 size is: " << mstack2.size() << std::endl;
	
		std::cout << "*Popping element from MutantStack 1, should't impact MutantStack 2*" << std::endl;
		mstack1.pop();
		std::cout << "MutantStack 1 size is: " << mstack1.size() << std::endl;
		std::cout << "MutantStack 2 size is: " << mstack2.size() << std::endl;
	}

	return 0;
}
