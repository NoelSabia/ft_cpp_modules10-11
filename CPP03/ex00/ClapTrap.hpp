
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string     name;
        unsigned int    hit_points;
        unsigned int    energy_points;
        int             attack_damage;

        ClapTrap();
    
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif