#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void giveName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif