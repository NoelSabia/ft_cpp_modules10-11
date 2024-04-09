#include "Zombie.hpp"

int main()
{
	Zombie *zombis = zombieHorde(3, "zombi");

	for (int i = 0; i < 3; i++)
		zombis[i].announce();

	delete [] zombis;
	return 0;
}