#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavTrap1("ScavTrap1");

	scavTrap1.attack("target");
	scavTrap1.takeDamage(5);
	scavTrap1.beRepaired(3);
	scavTrap1.guardGate();

	return 0;
}