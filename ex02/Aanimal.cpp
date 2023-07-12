/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:31:33 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/11 15:44:25 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"

Aanimal::Aanimal()
{
	std::cout << "animal constructor called\n";
	_type =  "UnKnow";
}

Aanimal::Aanimal(const Aanimal &cpy)
{
	*this = cpy;
	std::cout << "copy constructor called\n";
}

Aanimal &Aanimal::operator=(const Aanimal &copu)
{
	this->_type = copu.getType();
	return *this;
}

Aanimal::~Aanimal()
{
	std::cout << "animal destructor called\n";
}
