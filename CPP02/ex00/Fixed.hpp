
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixedPointInt;
		static const int	fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &newFixed);
		Fixed& operator=(const Fixed &copy);
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

#endif