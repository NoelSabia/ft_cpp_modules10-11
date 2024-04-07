#include <iostream>

class Book
{
    public:
        std::string  title;
        std::string  author;
        int     page;

        Book(std::string aTitle, std::string aAuthor, int aPages)
        {
            title = aTitle;
            author = aAuthor;
            page = aPages;
        }
};

int main()
{

    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "idk", 1500);

    return (0);
}
