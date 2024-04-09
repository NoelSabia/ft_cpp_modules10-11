#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	if (this->weapon.getType().empty())
		std::cout << this->name << " attacks with their bare hands" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}