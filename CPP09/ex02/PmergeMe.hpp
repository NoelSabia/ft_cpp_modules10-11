#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <exception>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>

class PmergeMe
{
    private:

    public:
        PmergeMe(void);
        PmergeMe(const PmergeMe& to_copy);
        PmergeMe &operator=(const PmergeMe& to_copy);
        ~PmergeMe(void);

        void sortVec(std::vector<unsigned int> & vector);
        void sortList(std::list<unsigned int> & list);

        class wrong_input_exception : public std::exception
        {
            public:
                virtual const char* what() const throw();  
        };
};

unsigned int ft_stou(const std::string& str);

#endif