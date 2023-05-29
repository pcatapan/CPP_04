/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:45:02 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/29 20:28:29 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "A cat was constructed\n";
}

Cat::~Cat()
{
	std::cout << "A cat was destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "[ Cat ] Meow!" << std::endl;
}
