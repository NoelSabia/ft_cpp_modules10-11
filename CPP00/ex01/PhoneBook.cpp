#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::start()
{
    std::cout << std::endl;
    std::cout << "The Phonebook has following options: " << std::endl;
    std::cout << "ADD\t: To add a new contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: To exit the program." << std::endl;
}

void PhoneBook::add()
{
    static int i;
    this->contacts[i % 8].init();
    this->contacts[i % 8].newIndex(i);
    i++;
}
