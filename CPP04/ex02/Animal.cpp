#include "Animal.hpp"

Animal::Animal() {}

Animal::~Animal() {}

Animal::Animal(Animal const &copy) : type(copy.type) {}

Animal &Animal::operator=(Animal const &other) {
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}