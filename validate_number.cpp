#include <iostream>
#include <limits>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Invalid Number! Please enter a number again : ";
        std::cin >> Number;
    }

    return (Number);
}

int main(void)
{
    int Number = readNumber();

    return (0);
}

