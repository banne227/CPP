#ifndef CAT_HPP
#define CAT_HPP

#include <string>	
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif