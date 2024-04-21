
#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("R2-D2");

    clap.attack("another Robot");
    clap.takeDamage(3);
    clap.beRepaired(3);
    return (0);
}
