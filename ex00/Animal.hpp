/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:06:08 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/13 13:00:18 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal(void);
	Animal(std::string type);
	Animal(Animal const &src);
	virtual ~Animal(void);
	Animal &operator=(Animal const &src);
	std::string getType(void) const;
	virtual void makeSound(void) const;
};


#endif
