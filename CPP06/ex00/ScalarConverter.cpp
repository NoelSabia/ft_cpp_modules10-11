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

void	ScalarConverter::converter(std::string str)
{
	std::cout << "hi" << std::endl;
}
