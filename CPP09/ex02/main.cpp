#include "PmergeMe.hpp"

void splitAndConvertList(const std::string& str, std::list<unsigned int>& tmp)
{
    std::istringstream iss(str);
    std::string token;

    while (iss >> token)
        tmp.push_back(ft_stou(token));
}

void splitAndConvertVec(const std::string& str, std::vector<unsigned int>& tmp)
{
    std::istringstream iss(str);
    std::string token;

    while (iss >> token)
        tmp.push_back(ft_stou(token));
}

int main(int argc, char **argv)
{
	if (argc <= 1 || argc > 2)
    {
        std::cerr << "Use a string to put all the numbers in them!" << std::endl;
	    return (1);
    }

    PmergeMe pmm;
    std::vector<unsigned int>temp_vec;
    std::list<unsigned int>temp_list;

    try
    {
        for (int i = 1; i < argc; i += 1)
            if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
			    throw PmergeMe::wrong_input_exception();
        splitAndConvertVec(argv[1], temp_vec);
        splitAndConvertList(argv[1], temp_list);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    pmm.sortVec(temp_vec);
    std::cout << std::endl;
    pmm.sortList(temp_list);

	return (0);
}