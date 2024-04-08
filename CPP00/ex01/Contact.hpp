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
        int         number(std::string str) const;
        std::string max_signs(std::string str);

    public:
        Contact();
        ~Contact();
        void    init();
        void    search_user(int index);
};

#endif