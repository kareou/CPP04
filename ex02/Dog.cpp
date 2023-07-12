/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:12:19 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/11 15:59:32 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Aanimal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &cpy) : Aanimal(cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = copy._type;
	this->_brain = copy._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "dog is barking" << std::endl;
}

std::string Dog::getType() const
{
	return _type;
}
