#include "Zombie.hpp"

int main() {
	Zombie* horde = zombieHorde(5, "HordeZombie");
	delete horde;
	return 0;
}