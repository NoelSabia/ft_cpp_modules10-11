#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook   book;
    std::string cmd;
    int         index;

    index = 0;
    book.start();
    while (cmd.compare("EXIT") != 0)
    {
        std::cout << "prompt: " << std::flush;
        std::cin >> cmd;
        if (cmd.compare("ADD") == 0)
            index = book.add(index);
        if (cmd.compare("SEARCH") == 0)
           book.search();
    }
    return (0);
}