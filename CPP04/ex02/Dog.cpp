#include "Dog.hpp"

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouf wouf" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Dog::Dog() : Animal("Dog")
{
	std::cout << this->type << " constructor called" << std::endl;
	try
	{
		this->brain = new Brain();
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory Allocation is failed." << std::endl;
	}

}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
}