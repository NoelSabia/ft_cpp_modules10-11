#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook   book;
    std::string cmd;

    while (cmd.compare("EXIT") != 0)
    {
        if (cmd.compare("ADD") == 0)
            book.add();
        if (cmd.compare("SEARCH") == 0)
            book.search();
        std::cout << "prompt: " << std::flush;
        std::cin >> cmd;
    }
    return (0);
}