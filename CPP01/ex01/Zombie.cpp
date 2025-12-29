#include "Zombie.hpp"

Zombie::Zombie(const std::string& name){
	_name = name;
}

Zombie::~Zombie() {}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(const std::string& name) 
{
   return new Zombie(name);
}

void randomChump(const std::string& name) 
{
    Zombie zombie(name);
    zombie.announce();
}