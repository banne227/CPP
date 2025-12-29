#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		return (NULL);
	Zombie* to_return = newZombie(name);
	to_return->announce();
	int count = 2;
	while(count <= N)
	{
		Zombie* temp_zombie = newZombie(name);
		temp_zombie->announce();
		delete temp_zombie;
		count++;
	}
	return (to_return);
}