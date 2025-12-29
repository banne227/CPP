#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog() :Animal() {
	this->type = "dog";
	this->brain = new Brain();
}

Dog::~Dog() {
	delete this->brain;
}

Dog::Dog(const Dog &copy) :Animal(copy) {
	this->type = "dog";
	this->brain = new Brain(*(copy.brain));
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other) {
		Animal::operator=(other);
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}