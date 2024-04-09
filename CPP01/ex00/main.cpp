#include "Zombie.hpp"

int main()
{
	std::string name;

	std::cout << "Creating a zombie on the stack" << std::endl;
	void randomChump(std::string name);

	std::cout << "Enter a name for the zombie: " << std::endl;
	std::cin >> name;

	Zombie zombie1(name);

	std::cout << "Creating a zombie on the heap" << std::endl;
	std::cout << "Enter a name for the zombie: " << std::endl;
	std::cin >> name;

	Zombie *zombie2 = new Zombie(name);
	zombie2->announce();
	delete zombie2;

	std::cout << "Calling randomChump() (what does Chump even mean?)" << std::endl;
	randomChump("Zombie3");
	return (0);
}
