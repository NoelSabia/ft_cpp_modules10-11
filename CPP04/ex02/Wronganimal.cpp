#include "Wronganimal.hpp"

#include "Animal.hpp"

WrongAnimal::WrongAnimal() : type("aWrongAnimal")
{
	std::cout << this->type << " consturctor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << this->type << " consturctor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	std::cout << this->type << " copy consturctor called." << std::endl;
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	if (this != &animal)
		this->type = animal.type;
	std::cout << this->type << " assignation operator called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " destructor called." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

