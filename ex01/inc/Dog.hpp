
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	protected:
		Brain* brain;

	public:
		Dog();
		virtual ~Dog();
		Dog&   operator=(const Dog& copy);
		Dog(const Dog &copy);
		
		void makeSound() const;
};

#endif