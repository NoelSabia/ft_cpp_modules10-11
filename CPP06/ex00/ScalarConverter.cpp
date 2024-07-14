#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const& copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

std::string	ScalarConverter::getString() const
{
	return ("");
}

void	ScalarConverter::converter(std::string str)
{
	std::cout << "hi" << std::endl;
}
https://github.com/youssefachehboune/cpp-42/blob/master/Module06/ex00/Convert.cpp