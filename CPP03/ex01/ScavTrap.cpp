#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Created a new ScavTrap named: " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap with the name: " << this->name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points -= 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " run out of energy!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode!" << std::endl;
}


