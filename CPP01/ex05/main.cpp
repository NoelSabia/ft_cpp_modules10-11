#include "Harl.hpp"

int main()
{
	std::string input;
	Harl		Harl;

	std::cout << "Enter a level: " << std::endl;
	std::cin >> input;
	Harl.complain(input);

	while (input.compare("EXIT") != 0)
	{
		std::cout << "Enter a level: " << std::endl;
		std::cin >> input;
		Harl.complain(input);
	}
	return (0);
}