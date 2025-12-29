#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA {
public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();

	void attack() const;

private:
	std::string name;
	Weapon& weapon;
};

#endif