/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:35:13 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/29 20:39:28 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Aanimal";
	std::cout << "AAnimal was constructed\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal was destroyed\n";
}

AAnimal::AAnimal(AAnimal const & ref)
{
	this->type = ref.getType();
	std::cout << "AAnimal was constructed from a copy\n";
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}
