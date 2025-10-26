#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> Numbers { 13, 6, 20, 1 };

    std::cout << "accessing elements of Numbers vector using at() :\n";
    std::cout << "Number[0] = " << Numbers.at(0) << std::endl;
    std::cout << "Number[1] = " << Numbers.at(1) << std::endl;
    std::cout << "Number[2] = " << Numbers.at(2) << std::endl;
    std::cout << "Number[3] = " << Numbers.at(3) << std::endl;


    std::cout << "accessing elements of Numbers vector using traditional array brakets [] : \n";
    std::cout << "Number[0] = " << Numbers[0] << std::endl;
    std::cout << "Number[1] = " << Numbers[1] << std::endl;
    std::cout << "Number[2] = " << Numbers[2] << std::endl;
    std::cout << "Number[3] = " << Numbers[3] << std::endl;

    return (0);
}
