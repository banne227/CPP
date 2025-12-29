#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

Brain::Brain(Brain const &copy) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(Brain const &other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const {
	return this->ideas[index];
}


void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}