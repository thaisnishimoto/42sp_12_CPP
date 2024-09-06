/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:15:55 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/06 17:19:25 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Colors.hpp" 
# define SLOTS 4
# define FLOOR_SIZE 42

class Character : public ICharacter {

public:
	Character();
	Character(std::string name);
	Character(const Character& src);
	Character&	operator=(const Character& rhs);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	static void	dropOnFloor(AMateria* drop);
	static void	cleanFloor();

private:
	std::string	_name;
	AMateria*	_inventory[SLOTS];
	static AMateria*	_floor[FLOOR_SIZE];
	static int	_characterCount;
};

#endif
