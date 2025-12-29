#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap1("ClapTrap1");

	clapTrap1.attack("target");
	clapTrap1.takeDamage(5);
	clapTrap1.beRepaired(3);
	return 0;
}