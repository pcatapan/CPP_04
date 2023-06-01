/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:19:26 by pcatapan          #+#    #+#             */
/*   Updated: 2023/06/01 21:19:27 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	protected:
		Brain* brain;

	public:
		Dog();
		virtual ~Dog();
		Dog	operator=(const Dog& copy);
		Dog(const Dog &copy);
		
		void makeSound() const;
};

#endif