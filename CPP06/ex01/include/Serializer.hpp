/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:52:49 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/26 16:19:40 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h> //uintptr_t
# include "Data.hpp"

class	Serializer {

public:
	~Serializer();
	static uintptr_t	serialize(Data* ptr);
	static Data*	deserialize(uintptr_t raw);

private:
	Serializer();
	Serializer(const Serializer& src);
	Serializer&	operator=(const Serializer& rhs);
};

#endif
