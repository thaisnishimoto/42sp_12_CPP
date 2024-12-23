/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:21:27 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/12/18 10:21:30 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERMERGE_ME_H
#define PERMERGE_ME_H

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <sstream>
#include <stdexcept>
#include <ctime> //clock(), CLOCKS_PER_SEC
#include <iomanip> //setprecision
#include <unistd.h>

class PmergeMe
{
public:
    PmergeMe();
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& rhs);
    ~PmergeMe();

    void validateInput(int argc, char* argv[]);
    void sortControl(int argc, char* argv[]);
    void sortVector(int argc, char* argv[]);

private:
    std::vector<int> _controlVec;
    std::vector<int> _vector;
};

template <typename T>
T parseSequence(int argc, char* argv[])
{
    T container;
    int value;
    for (int i = 1; i < argc; ++i)
    {
        std::string input = argv[i];
        std::istringstream iss(input);
        iss >> value;
        container.push_back(value);
    }
    return container;
}

template <typename Container>
void printContainer(const Container& sequence)
{
    typename Container::const_iterator it = sequence.begin();
    while (it < sequence.end())
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
}

template <typename T, typename PairContainer>
void mergeInsertionSort(T& container)
{
    //step1: separate number that cannot be paired
  	int oddOut = -1;
    if (container.size() % 2 != 0)
    {
    	oddOut = container.back();
    	container.pop_back();
	}

    //step2: divide elements in sorted pairs
    PairContainer pairs;
    for (size_t i = 0; i < container.size(); i += 2)
    {
    	if (container[i] > container[i + 1])
    		pairs.push_back(std::make_pair(container[i], container[i + 1]));
        else
    		pairs.push_back(std::make_pair(container[i + 1], container[i]));
    }

    if (oddOut != -1)
    	std::cout << "even sequence" << std::endl;
}

#endif