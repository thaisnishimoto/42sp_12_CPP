/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:34:15 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/06 23:35:15 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

template <typename T>
class	Array {

public:
	Array();
	Array(unsigned int n);
	Array(const Array& src);
	Array&	operator=(const Array& rhs);
	~Array();

	unsigned int	size() const;
	T&	operator[](unsigned int i);
	const T&	operator[](unsigned int i) const;

private:
	T*	_elements;
	unsigned int	_size;
};

#include "Array.tpp"

#endif
