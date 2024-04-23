
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap Frag("Frag");

    Frag.attack("the moon");
    Frag.takeDamage(10);
    Frag.beRepaired(5);
    Frag.highFivesGuys();
    return (0);
}
