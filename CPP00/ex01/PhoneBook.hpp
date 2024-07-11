#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <sstream>

class PhoneBook
{
    private:
        Contact contacts[8];

    public:
        PhoneBook();
        ~PhoneBook();
        void    start();
        int     add(int index);
        void    search();
};

#endif