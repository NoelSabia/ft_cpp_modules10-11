#include "replaceclass.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}
	else
	{
		Replaceclass replace(argv[1]);
		replace.replace(argv[2], argv[3]);
	}
	return 0;
}