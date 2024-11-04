/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scan.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:38:42 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/04 00:35:07 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : _maxSize(N)
{
}

Span::Span(const Span& src) : _maxSize(src._maxSize), _numbers(src._numbers) 
{
}

Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		_maxSize = rhs._maxSize;
		_numbers = rhs._numbers;
	}
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::out_of_range("Span is full");
	_numbers.push_back(number);
}

int	Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span");

	std::vector<int>	sortedNums = _numbers;
	std::sort(sortedNums.begin(), sortedNums.end());

	int	shortestSpan = sortedNums[1] - sortedNums[0];
	std::vector<int>::iterator	it;
	for (it = sortedNums.begin(); it != sortedNums.end() - 1; ++it)
	{
		int	newSpan = *(it + 1) - *it;
		if (newSpan < shortestSpan)
			shortestSpan = newSpan; 
		std::cout << "Span: " << shortestSpan << std::endl;
	}
	return shortestSpan;
}

int	Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span");

	int	minNum = *std::min_element(_numbers.begin(), _numbers.end());
	int	maxNum = *std::max_element(_numbers.begin(), _numbers.end());
	return maxNum - minNum;
}
