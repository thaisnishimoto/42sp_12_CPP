/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:31:03 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/08 00:57:01 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

template <typename T>
void	swap(T& value1, T& value2)
{
	T	temp;
	temp = value1;
	value1 = value2;
	value2 = temp;
}

template <typename T>
const T&	min(const T& value1, const T& value2)
{
	if (value1 < value2)
		return value1;
	return value2;
}

template <typename T>
const T&	max(const T& value1, const T& value2)
{
	if (value1 > value2)
		return value1;
	return value2;
}

#endif
