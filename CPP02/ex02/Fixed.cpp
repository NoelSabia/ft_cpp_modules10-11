
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->fixedPointInt= 0;
}

Fixed::Fixed(const int n) : fixedPointInt(n << fractionalBits)
{
}

Fixed::Fixed(const float n) : fixedPointInt(roundf(n * ( 1 << fractionalBits)))
{
}

Fixed::Fixed(const Fixed &newFixed)
{
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
}

int Fixed::getRawBits(void)const
{
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

// Comparison

bool Fixed::operator>(const Fixed &newFixed) const
{
	return (this->getRawBits() > newFixed.getRawBits());
}

bool Fixed::operator<(const Fixed &newFixed) const
{
	return (this->getRawBits() < newFixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &newFixed) const
{
	return (this->getRawBits() >= newFixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &newFixed) const
{
	return (this->getRawBits() <= newFixed.getRawBits());
}

bool Fixed::operator==(const Fixed &newFixed) const
{
	return (this->getRawBits() == newFixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &newFixed) const
{
	return (this->getRawBits() != newFixed.getRawBits());
}

//+-*/

Fixed Fixed::operator+(const Fixed &newFixed) const
{
	return (Fixed(this->toFloat() + newFixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &newFixed) const
{
	return (Fixed(this->toFloat() - newFixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &newFixed) const
{
	return (Fixed(this->toFloat() * newFixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &newFixed) const
{
	return (Fixed(this->toFloat() / newFixed.toFloat()));
}

//++--

Fixed& Fixed::operator++(void)
{
	++this->fixedPointInt;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed increment(*this);
	increment.fixedPointInt = this->fixedPointInt++;
	return (increment);
}

Fixed& Fixed::operator--(void)
{
	--this->fixedPointInt;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed decrement(*this);
	decrement.fixedPointInt = this->fixedPointInt--;
	return (decrement);
}

//max&&min

Fixed& Fixed::min(Fixed &a, Fixed&b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return(b);
}

Fixed& Fixed::max(Fixed &a, Fixed&b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return(b);
}
