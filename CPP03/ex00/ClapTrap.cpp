#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name) , hitPoints(10), energyPoints(10), attackDamage(0) {}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(const ClapTrap& other) 
	: _name(other._name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) 
{}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		if (this->hitPoints == 0)
			std::cout << this->_name << " is dead and can't attack!" << std::endl;
		else
			std::cout << this->_name << " has no energy to attack!" << std::endl;
		return ;
	}

	this->energyPoints -= 1;
	std::cout << "ClapTrap " 
			  << this->_name
			  << " attacks "
			  << target
			  << ", causing "
			  << this->attackDamage
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints <= 0)
	{
		std::cout << this->_name << " is already dead" << std::endl;
		return ;
	}
	
	std::cout << this->_name 
			  << " takes "
			  << amount
			  << " points of damage!" 
			  << std::endl;
	

	int result = (int)this->hitPoints - (int)amount;
	if (result < 0)
		result = 0;
	this->hitPoints = (unsigned int)result;

	std::cout << "now " << this->_name	
			  << " has " << this->hitPoints
			  << " left" << std::endl;
	
	if (this->hitPoints == 0)
	{
		std::cout << this->_name << " has died" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		if (this->hitPoints == 0)
			std::cout << this->_name << " is dead and can't be repaired!" << std::endl;
		else
			std::cout << this->_name << " has no energy to be repaired!" << std::endl;
		return ;
	}

	std::cout << "ClapTrap "
			  << this->_name
			  << " is repaired, gaining "
			  << amount
			  << " hit points!"
			  << std::endl;
	this->energyPoints -= 1;
	this->hitPoints += amount;
	std::cout << "now " << this->_name	
			  << " has " << this->hitPoints
			  << " left" << std::endl;
}