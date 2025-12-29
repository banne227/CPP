#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongDog::WrongDog() : WrongAnimal() {
	this->type = "dog";
}

WrongDog::~WrongDog() {}

WrongDog::WrongDog(const WrongDog &copy) :WrongAnimal(copy) {
	this->type = "dog";
}

WrongDog &WrongDog::operator=(const WrongDog &other) {
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

void WrongDog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}