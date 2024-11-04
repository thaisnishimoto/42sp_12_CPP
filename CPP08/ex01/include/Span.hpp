/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:22:06 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/04 15:05:53 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm> //sort
#include <stdexcept> //lenght_error, logic_error

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

class	Span {
public:
	Span(unsigned int N);
	Span(const Span& src);
	Span&	operator=(const Span& rhs);
	~Span();

	void	addNumber(int number);
	int	shortestSpan() const;
	int	longestSpan() const;

	template <typename Iterator>
	void	addNumbersRange(Iterator begin, Iterator end)
	{
		if (std::distance(begin, end) + _numbers.size() > _maxSize)
			throw std::length_error("Adding range would exceed Span's max size");
		_numbers.insert(_numbers.end(), begin, end);
	}

private:
	Span();
	unsigned int	_maxSize;
	std::vector<int>	_numbers;
};

#endif
