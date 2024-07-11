#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char *argv[])
{
    std::string str;

    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; ++i)
        {
            str += argv[i];
            if (i < argc - 1)
                str += " ";
        }
        for (size_t i = 0; i < str.length(); ++i)
            str[i] = std::toupper(str[i]);
        std::cout << str << std::endl;
    }
    return 0;
}
