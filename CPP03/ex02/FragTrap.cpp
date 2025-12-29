#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called for " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap assignment operator called for " << this->_name << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target) {
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		if (this->hitPoints == 0)
			std::cout << this->_name << " is dead and can't attack!" << std::endl;
		else
			std::cout << this->_name << " has no energy to attack!" << std::endl;
		return ;
	}

	this->energyPoints -= 1;
	std::cout << "FragTrap " 
			  << this->_name
			  << " attacks "
			  << target
			  << ", causing "
			  << this->attackDamage
			  << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " is requesting a high five!" << std::endl;
}