/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:32:21 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/13 15:38:40 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default"), _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name), _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &cpy)
{
	*this = cpy;
}

Character &Character::operator=(Character const &cpy)
{
	this->_name = cpy._name;
	this->_count = cpy._count;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = cpy._inventory[i];
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *mater)
{
	if (this->_count != 4 && mater)
	{
		this->_inventory[this->_count] = mater;
		this->_count++;
	}
	else
		std::cout << "Inventory is full or materia is NULL" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx] = NULL;
		this->_count--;
	}
	else
		std::cout << "There is no wmaterial in this index" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "There is no wmaterial in this index" << std::endl;
}
