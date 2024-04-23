#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Created a new ClapTrap named: " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor was called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_points > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << name << " run out of energy!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > amount)
    {
        std::cout << "Clap Trap " << name << " takes " << amount << " damage!" << std::endl;
        hit_points -= amount;
    }
    else
    {
        std::cout << "Clap Trap " << name << " died." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > amount)
    {
        std::cout << "Clap Trap " << name << " repairs itself for " << amount << " hitpoints" << std::endl;
        energy_points -= 1;
        hit_points += amount;
    }
    else
    {
        std::cout << "ClapTrap " << name << " run out of energy!" << std::endl;
    }
}
