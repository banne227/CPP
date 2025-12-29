#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {

	public :
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		Animal &operator=(Animal const &other);
		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		std::string type;
};

#endif