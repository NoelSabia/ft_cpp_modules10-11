#include "PMergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	    return (0);
    PmergeMe pmm;
    try
    {
        for (int i = 1; i < argc; i += 1)
            if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
			    throw PmergeMe::wrong_input_exception();
        std::vector<unsigned int>temp;
        for (int i = 1; i < argc; i += 1)
            temp.push_back(ft_stou(argv[i]));
        std::vector<unsigned int>::iterator container1;
        std::vector<unsigned int>::iterator container2;
        for (container1 = temp.begin(); container1 != temp.end(); container1++)
        {
            for (container2 = container1 + 1; container2 != temp.end(); container2++)
                if (*container2 == *container1)
			        throw PmergeMe::wrong_input_exception();
        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    pmm.sortVec(argc, argv);
    std::cout << std::endl;
    pmm.sortList(argc, argv);

	return (0);
}