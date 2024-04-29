#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wronganimal.hpp"
#include "Wrongcat.hpp"

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

	int m = 0;

	const Animal* animals[2] = {new Dog(), new Cat()};
	while (m++ < 2)
	{
		delete animals[m];
	}

	return (0);
}
