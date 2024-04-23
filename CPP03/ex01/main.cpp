
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap Scav("Scan Nr.1");

    Scav.attack("Target Nr.1");
    Scav.takeDamage(10);
    Scav.beRepaired(10);
    Scav.guardGate();
    return (0);
}
