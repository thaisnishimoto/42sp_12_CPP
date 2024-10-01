/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:28:42 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/01 15:12:01 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

# define RESET   "\033[0m"
# define YELLOW  "\033[33m"

template <typename T, typename Func>
void	iter(T* array, int length, const Func& function)
{
	for (int i = 0; i < length; i++)
		function(array[i]);
}

//function templates
template <typename T>
void	printElem(const T& elem)
{
	std::cout << elem << std::endl;
}

template <typename T>
void	addOne(T& elem)
{
	elem += 1;
}

template <typename T>
void	concatOne(T& elem)
{
	elem += "1";
}

template <typename T>
void	replaceNum(T& elem)
{
	elem = 0;
}

template <typename T>
void	replaceStr(T& elem)
{
	elem = "New str";
}

#endif
