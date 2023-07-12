/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:06:03 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/11 16:00:00 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Aanimal* meta[4];

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
