/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:49:49 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/29 20:30:52 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"
Cat::Cat(): Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

Cat::Cat(const Cat& copy)
{
    *this = copy;
    std::cout << "[ Cat ] has been copied with copy costructr. " << std::endl;
}

Cat&   Cat::operator=(const Cat& copy) 
{
    std::cout << "[ Cat ] has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain(*copy.brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "[ Cat ] meows!" << std::endl;
}
