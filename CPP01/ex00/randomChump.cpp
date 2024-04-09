#include "Zombie.hpp"

//why like that -> obj is created on stack and with the pointer the lifetime of zombie is within the scope of the function
void randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}
