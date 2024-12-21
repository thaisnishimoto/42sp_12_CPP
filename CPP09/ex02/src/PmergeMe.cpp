/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:33:33 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/12/18 15:33:36 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe& src)
{
    (void)src;
//copy variables
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
    if (this != &rhs)
    {
//        this. = rhs;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{}

void PmergeMe::validateInput(int argc, char* argv[])
{
    int value;
    std::set<int> uniqueNumbers;

    for (int i = 1; i < argc; ++i)
    {
        std::string input = argv[i];
        std::istringstream iss(input);
        if (!(iss >> value) || !iss.eof())
          throw std::invalid_argument("Invalid integer input '" + input + "'");
        if (value <= 0)
          throw std::invalid_argument("Invalid non positive input '" + input + "'");
        if (uniqueNumbers.count(value) == 1)
          throw std::invalid_argument("Invalid duplicated input '" + input + "'");
        uniqueNumbers.insert(value);
    }
}

void PmergeMe::sortControl(int argc, char* argv[])
{
    _controlVec = parseSequence<std::vector<int> >(argc, argv);
    std::cout << "Before:  ";
    printContainer(_controlVec);

    std::sort(_controlVec.begin(), _controlVec.end());
    std::cout << "After:   ";
    printContainer(_controlVec);
}

void PmergeMe::sortVector(int argc, char* argv[])
{
    _vector = parseSequence<std::vector<int> >(argc, argv);
    std::cout << "Before vec:  ";
    printContainer(_vector);
}