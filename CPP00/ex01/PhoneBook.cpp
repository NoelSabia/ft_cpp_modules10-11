#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

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

int PhoneBook::add(int index)
{
    contacts[index].init();
    index++;
    if (index == 7)
        index = 0;
    return (index);
}

void PhoneBook::search()
{
    std::string indexStr;
    std::cout << "Enter an index: " << std::flush;
    std::cin >> indexStr;

    for (std::string::size_type i = 0; i < indexStr.size(); ++i)
    {
        if (!isdigit(indexStr[i]))
        {
            std::cout << "Please enter only numbers." << std::endl;
            return;
        }
    }

    std::istringstream iss(indexStr);
    int index;
    iss >> index;

    if (index >= 0 && index <= 7)
        contacts[index].search_user(index);
    else
        std::cout << "Invalid index." << std::endl;
}