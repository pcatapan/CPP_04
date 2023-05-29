
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain&   operator=(const Brain& copy);
		Brain(const Brain &copy);
	
};

#endif