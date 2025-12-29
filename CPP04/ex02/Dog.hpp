#ifndef DOG_HPP
#define DOG_HPP

#include <string>	
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &other);
		void makeSound() const;
	private:
		Brain *brain;
};


#endif