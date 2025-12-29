#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
	this->type = type;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	const std::string& ref_type = this->type;
	return ref_type;
}

void Weapon::setType(const std::string& type)
{
	Weapon::type = type;
}