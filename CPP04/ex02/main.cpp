#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wronganimal.hpp"
#include "Wrongcat.hpp"
#include <cstdlib>


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Dog doggo;
	{
		Dog doggo2 = doggo;
	}

	const Animal* animals[2] = {new Dog(), new Cat()};
	delete animals[0];
	delete animals[1];

	return (0);
}
