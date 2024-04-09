#include "Zombie.hpp"

//why like that -> obj is created on heap and with the pointer the lifetime of zombie exceeds the scope of the function
Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}