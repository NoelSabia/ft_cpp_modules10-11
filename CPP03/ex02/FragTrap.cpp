#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Created a new FragTrap named: " << name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap with the name: " << this->name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (this->energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " high fives guys!" << std::endl;
		this->energy_points -= 1;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " run out of energy!" << std::endl;
	}
}
