/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:22:06 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/01 18:44:23 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class	Span {
public:
	Span(unsigned int N);
	Span(const Span& src);
	Span&	operator=(const Span& rhs);
	~Span();

	void	addNumber(int number);
	int	shortestSpan();
	int	longestSpan();

private:
	Span();
	unsigned int	N;
	std::vector<int>	span_vec;
}

#endif
