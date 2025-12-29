#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
	Zombie(std::string const& name);
	~Zombie();

    void announce(void);

private:
    std::string _name;
};

void randomChump(const std::string& name);
Zombie* newZombie(const std::string& name);

#endif