/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:11:40 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/11 15:54:39 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog &cpy);
	Dog &operator=(const Dog &copu);
	~Dog();
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif
