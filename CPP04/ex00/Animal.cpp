#include "Animal.hpp"

Animal::Animal() : type("aAnimal")
{
	std::cout << this->type << " Animal consturctor called." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << this->type << " consturctor called." << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << this->type << " copy consturctor called." << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		this->type = animal.type;
	std::cout << this->type << " assignation operator called." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << this->type << " destructor called." << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
