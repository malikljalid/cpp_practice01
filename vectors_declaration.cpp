#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> vNumbers = { 10, 20, 30, 40 } ;

    std::cout << "Vector content : ";

    for (const int &Number : vNumbers) // using a reference in rang loop is efficent when dealing with complexe and larg types like std::string and std::vector
        std::cout << Number << ' ';

    std::cout << std::endl;

    return (0);
}
