#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook       book;
    std::string     invit;
    std::string     cmd;

    invit = "CMD-> ";
    for (std::cout << invit, std::getline(std::cin, cmd); !std::cin.eof(); std::getline(std::cin, cmd))
    {
        if (cmd == "ADD")
        {
            if (!book.addContact())
                break;
        }
        else if (cmd == "SEARCH")
        {
            if (!book.searchContact())
                break;
        }
        else if (cmd == "EXIT")
                break;
        std::cout << invit;
    }
    return(0);
}