/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:27:59 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/13 15:35:54 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
		int _count;
	public:
		Character();
		Character(std::string name);
		Character(Character const &cpy);
		Character &operator=(Character const &cpy);
		virtual ~Character();
		virtual std::string const &getName() const;
		virtual void equip(AMateria *mater);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
}

#endif
