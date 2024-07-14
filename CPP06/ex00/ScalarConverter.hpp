#ifndef	SCALARCONVERTER_HPP 
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& copy);
		ScalarConverter & operator=(ScalarConverter const& copy);
		~ScalarConverter();
		
		void		toChar();
		std::string getString() const;
		void		toDouble();
		void		toInt();
		void		toFloat();
	
	public:
		static void converter(std::string str);
};

#endif