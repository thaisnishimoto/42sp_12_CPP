/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:22:06 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/04 00:13:54 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm> //sort
#include <stdexcept> //out_of_range, logic_error

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

private:
	Span();
	unsigned int	_maxSize;
	std::vector<int>	_numbers;
};

#endif
