#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Wronganimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
};

#endif