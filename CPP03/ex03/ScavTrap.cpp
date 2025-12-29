#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called for " << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap assignment operator called for " << this->_name << std::endl;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now guarding the gate!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		if (this->hitPoints == 0)
			std::cout << this->_name << " is dead and can't attack!" << std::endl;
		else
			std::cout << this->_name << " has no energy to attack!" << std::endl;
		return ;
	}

	this->energyPoints -= 1;
	std::cout << "ScavTrap " 
			  << this->_name
			  << " attacks "
			  << target
			  << ", causing "
			  << this->attackDamage
			  << " points of damage!" << std::endl;
}