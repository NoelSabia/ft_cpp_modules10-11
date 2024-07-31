#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cstdlib>

class RPN
{
    private:

    public:
        RPN(void);
        RPN(const RPN &to_copy);
        RPN &operator=(const RPN &to_copy);
        ~RPN(void);

        static bool validation(const std::string& expr);
        static long long calculate(const std::string& expr);

        class noresult : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class dividebyzero: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif