#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap1("FragTrap1");

	fragTrap1.attack("target");
	fragTrap1.takeDamage(5);
	fragTrap1.beRepaired(3);
	fragTrap1.highFivesGuys();
	return 0;
}