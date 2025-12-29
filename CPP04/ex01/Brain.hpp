#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {

	public :
		Brain();
		~Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &other);
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);

	private:
		std::string ideas[100];
};


#endif