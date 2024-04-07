#ifndef CONTACT
#define CONTACT

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        int         phone_num;
        std::string darkest_secret;
        int         index;

        std::string user_input(std::string str) const;
        std::string strlen(std::string str) const;

    public:
        Contact();
        ~Contact();
        void    init();
        void    display_one_contacts(int index) const;
        void    display_all_contacts(int index) const;
        void    newIndex(int index);
};

#endif