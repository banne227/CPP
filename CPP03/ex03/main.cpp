#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondTrap("DiamondTrap");

	diamondTrap.attack("target");
	diamondTrap.takeDamage(5);
	diamondTrap.beRepaired(3);
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();

	return 0;
}