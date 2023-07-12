/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:14:00 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/11 16:00:41 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Cat : public Aanimal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat &cpy);
	Cat &operator=(const Cat &copu);
	~Cat();
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif
