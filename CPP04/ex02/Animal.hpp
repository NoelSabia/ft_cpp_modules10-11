
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif