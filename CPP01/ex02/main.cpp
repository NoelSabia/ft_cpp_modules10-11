#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	//ptr to string
	std::string *brainPtr = &brain;
	//reference to string
	std::string &brainRef = brain;

	std::cout << "Memory Adress of the string variable: " << &brain << std::endl;
	std::cout << "Memory Adress of the string pointer: " << &brainPtr << std::endl;
	std::cout << "Memory Adress of the string reference: " << &brainRef << std::endl;

	std::cout << "Value of the string variable " << brain << std::endl;
	std::cout << "Value of the string pointer " << *brainPtr << std::endl;
	std::cout << "Value of the string reference " << brainRef << std::endl;

	return (0);
}