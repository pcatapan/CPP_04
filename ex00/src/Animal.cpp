/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:44:22 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/29 19:54:29 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal was constructed\n";
	this->type = "animal";
}

Animal::~Animal()
{
	std::cout << "Animal was destroyed\n";
}

Animal::Animal(Animal & ref)
{
	this->type = ref.type;
	std::cout << "Animal was constructed from a copy\n";
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string Animal::getType( void ) const
{
	return (this->type);
}