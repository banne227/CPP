#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog() :Animal() {
	this->type = "dog";
}

Dog::~Dog() {}

Dog::Dog(const Dog &copy) :Animal(copy) {
	this->type = "dog";
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}