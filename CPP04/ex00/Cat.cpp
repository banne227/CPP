#include "Cat.hpp"
#include <iostream>

Cat::Cat() :Animal() {
	this->type = "cat";
}

Cat::~Cat() {}

Cat::Cat(const Cat &copy) :Animal(copy) {
	this->type = "cat";
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}