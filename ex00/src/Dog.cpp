/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:45:09 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/29 20:27:48 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "A dog was constructed\n";
}

Dog::~Dog()
{
	std::cout << "A dog was destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "[ Dog ] barks!" << std::endl;
}
