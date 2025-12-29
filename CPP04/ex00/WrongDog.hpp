#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include <string>	
#include "WrongAnimal.hpp"
#include <iostream>

class WrongDog : public WrongAnimal {
	public:
		WrongDog();
		~WrongDog();
		WrongDog(const WrongDog &copy);
		WrongDog &operator=(const WrongDog &other);
		void makeSound() const;
};


#endif