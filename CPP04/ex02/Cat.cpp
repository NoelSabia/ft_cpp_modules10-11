#include "Cat.hpp"

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Wouf wouf" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Cat::Cat() : Animal("Cat")
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

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
}