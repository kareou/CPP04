/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:13:54 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/13 14:52:18 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Aanimal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &cpy) : Aanimal(cpy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain();
	*this->_brain = *(copy._brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "cat is meowing" << std::endl;
}

std::string Cat::getType() const
{
	return _type;
}
