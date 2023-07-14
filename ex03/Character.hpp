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
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string     _name;
        AMateria*       _inventory[4];
		int             _count;
    public:
        Character(const Character &copy); //canonical
        Character(std::string   _name);
        Character(); //canonical
        std::string const & getName()   const;
        ~Character(); //canonical
        Character&   operator=(const Character &to_assign); //canonical
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);
};

#endif