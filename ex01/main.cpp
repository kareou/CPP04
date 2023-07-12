/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:06:03 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/09 22:07:50 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta[4];

	for(int i = 0; i++ < 4;)
	{
		if (i % 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	for(int i = 0; i++ < 4;)
	{
		delete meta[i];
	}
	return 0;
}
