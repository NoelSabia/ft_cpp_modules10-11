#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon1 = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon1 = &weapon;
}

void HumanB::attack()
{
	if (this->weapon1 != NULL && !this->weapon1->getType().empty())
		std::cout << this->name << " attacks with their " << this->weapon1->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands" << std::endl;
}