#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {}

WrongAnimal::~WrongAnimal() {}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : type(copy.type) {}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}