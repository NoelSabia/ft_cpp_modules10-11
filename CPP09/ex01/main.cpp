#include "RPN.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc != 2)
        std::cerr << "Error" << std::endl;
	if (!RPN::validation(argv[1]))
        return (std::cerr << "Invalid Arguments" << std::endl, EXIT_FAILURE);
    try
    {
        std::cout << RPN::calculate(argv[1]) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
	return (EXIT_SUCCESS);
}