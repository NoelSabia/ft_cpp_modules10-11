
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointInt = 0;
}

Fixed::Fixed(const Fixed &newFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(newFixed.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
	{
		this->fixedPointInt = copy.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointInt);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointInt = raw;
}