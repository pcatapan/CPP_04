/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:19:32 by pcatapan          #+#    #+#             */
/*   Updated: 2023/06/01 21:19:33 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	protected:
		Brain* brain;

	public:
		Cat();
		virtual ~Cat();
		Cat	operator=(const Cat& copy);
		Cat(const Cat &copy);
		
		void makeSound() const;
};

#endif