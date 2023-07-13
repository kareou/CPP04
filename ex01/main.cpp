/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:06:03 by mkhairou          #+#    #+#             */
/*   Updated: 2023/07/13 14:37:38 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	delete meta;
	return 0;
}
