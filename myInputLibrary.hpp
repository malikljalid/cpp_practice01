#include <iostream>
#include <cstdlib>
#include <ctime>

namespace num
{
    int randomNumber(int From, int To)
    {
        return ((rand() % To - From + 1) - From);
    }

    int readNumber(void)
    {
        int Number;

        std::cout << "Please enter a number to search for : ";
        std::cin >> Number;

        return (Number);
    }
}
