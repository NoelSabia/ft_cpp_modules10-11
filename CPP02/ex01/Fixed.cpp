
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointInt= 0;
}

Fixed::Fixed(const int n) : fixedPointInt(n << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : fixedPointInt(roundf(n * ( 1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
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

int Fixed::toInt(void)const
{
	return this->fixedPointInt >> fractionalBits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(fixedPointInt) / static_cast<float>(1 << fractionalBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}