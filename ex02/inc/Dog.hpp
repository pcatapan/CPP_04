
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