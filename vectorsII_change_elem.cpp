#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> Numbers { 20, 6, 13, 37 };

    std::cout << "\nInitial Numbers : ";
    for (const int &i : Numbers)
        std::cout << i << ' ';

    for (int &i : Numbers)
        i = 20;

    std::cout << "\nUpdated Numbers : ";
    for (const int &i : Numbers)
    std::cout << i << ' ';

    Numbers[1] = 97;
    Numbers.at(3) = 10;

    std::cout << "\nUpdated Numbers : ";
    for (const int &i : Numbers)
    std::cout << i << ' ';
    std::cout << std::endl;

    return (0);
}
