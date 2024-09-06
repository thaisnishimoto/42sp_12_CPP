/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:43:10 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 17:05:41 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"
# include "Colors.hpp" 
# define MEMORY_SIZE 4

class	MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& rhs);
	MateriaSource& operator=(const MateriaSource& rhs);
	~MateriaSource();

	void	learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const& type);

private:
	AMateria*	_memory[MEMORY_SIZE];
};

#endif
