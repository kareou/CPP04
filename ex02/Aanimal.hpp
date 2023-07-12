/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:29:18 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/11 16:00:30 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class Aanimal
{
protected:
	std::string _type;
public:
	Aanimal();
	Aanimal(const Aanimal &cpy);
	Aanimal &operator=(const Aanimal &copu);
	virtual ~Aanimal();
	virtual std::string getType() const = 0;
	virtual void makeSound() const = 0;
};

#endif
