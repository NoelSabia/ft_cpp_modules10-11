#include <iostream>

int main(int argc, char *argv[])
{
    char temp;

    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int j = 1; argv[j]; j++)
        {
            int i = -1;
            while (argv[j][++i])
            {
                if (argv[j][i] >= 97 && argv[1][i] <= 122)
                    temp = argv[j][i] - 32;
                else
                    temp = argv[j][i];
                std::cout << temp;
            }
            if (j < argc -1)
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
    return (0);
}
