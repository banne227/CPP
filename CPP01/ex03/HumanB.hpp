#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB 
{
public:
	HumanB(const std::string& name);
	~HumanB();
	void setWeapon(Weapon& weapon);
	void attack() const;

private:
	std::string name;
	Weapon* weapon;
};
#endif