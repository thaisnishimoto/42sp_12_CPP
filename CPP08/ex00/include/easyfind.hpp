/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:52:05 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/10/31 17:08:38 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept> //runtime_error

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

template <typename T>
typename T::iterator	easyfind(T& container, const int val)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return it;
}

#endif
