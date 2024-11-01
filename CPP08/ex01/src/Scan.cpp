/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scan.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:38:42 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/01 18:54:06 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N) : N(N)
{
	std::cout << "Param constructor called" << std::endl;
}

Span::Span(const Span& src) : N(src.N), span_vec(src.span_vec) 
{
	std::cout << "Copy constructor called" << std::endl;
}

Span&	Span::operator=(const Span& rhs)
{
	if (this != rhs)
	{

	}
	return *this;
}

Span::~Span()
{

}

void	addNumber(int number);
int	shortestSpan();
int	longestSpan();
private:
	std::vector<int>	span_vec;
	unsigned int	N;
}

