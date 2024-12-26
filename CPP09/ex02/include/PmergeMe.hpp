/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:21:27 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/12/25 23:09:20 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERMERGE_ME_H
#define PERMERGE_ME_H

#include <iostream>
#include <vector>
#include <deque>
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

template <typename PairContainer>
void printPairs(const PairContainer& pairs)
{
    typename PairContainer::const_iterator it = pairs.begin();
    while (it < pairs.end())
    {
        std::cout << "(" << it->first << ", " << it->second << ") ";
        ++it;
    }
    std::cout << std::endl;
}

template <typename PairContainer>
void mergeSortPairs(PairContainer& pairs)
{
	//base case
	if (pairs.size() == 1)
          return;

    //Divide pairs in halves
    PairContainer left;
    PairContainer right;
    for (size_t i = 0; i < pairs.size() / 2; ++i)
    	left.push_back(pairs[i]);
    for (size_t i = pairs.size() / 2; i < pairs.size(); ++i)
    	right.push_back(pairs[i]);
    mergeSortPairs(left);
    mergeSortPairs(right);

	//merge sorted halves back, in order
    size_t i = 0;
    size_t l = 0;
    size_t r = 0;
    while (l < left.size() && r < right.size())
    {
    	if (left[l].first < right[r].first)
        	pairs[i++] = left[l++];
        else
        	pairs[i++] = right[r++];
    }
    while (l < left.size())
        pairs[i++] = left[l++];
    while (r < right.size())
        pairs[i++] = right[r++];
    return;
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

    //step2: divide elements in descending sorted pairs
    PairContainer pairs;
    for (size_t i = 0; i < container.size(); i += 2)
    {
    	pairs.push_back(std::make_pair(std::max(container[i], container[i + 1]),
        				std::min(container[i], container[i + 1])));
    }

    //Step 3: Recursively sort the pairs by the larger elements
    mergeSortPairs<PairContainer>(pairs);
//    printPairs(pairs);

    //Step 4: Create the sort and pend containers
    T sort;
    T pend;
    for (size_t i = 0; i < pairs.size(); ++i)
    {
        sort.push_back(pairs[i].first);
        pend.push_back(pairs[i].second);
	}
    if (oddOut != -1)
        pend.push_back(oddOut);
//    printContainer(sort);
//    printContainer(pend);

    //Step 5: Insert the smallest element of the first pair at the start
    sort.insert(sort.begin(), pend[0]);

    //Step 6:


}

#endif