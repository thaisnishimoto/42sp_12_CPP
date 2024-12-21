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

#endif