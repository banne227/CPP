#include "Cat.hpp"
#include <iostream>

Cat::Cat() :Animal() {
	this->type = "cat";
	this->brain = new Brain();
}

Cat::~Cat() {
	delete this->brain;
}

Cat::Cat(const Cat &copy) :Animal(copy) {
	this->type = "cat";
	this->brain = new Brain(*(copy.brain));
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other) {
		Animal::operator=(other);
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}