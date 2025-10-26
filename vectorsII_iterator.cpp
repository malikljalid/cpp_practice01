#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> Numbers { 6, 20, 37, 13 };
    std::vector <int>::iterator iter;

    std::cout << "Numbers vector : ";
    for (iter = Numbers.begin(); iter != Numbers.end(); iter++)
        std::cout << *iter.base() << ' ';
    std::cout << std::endl;

    return (0);
}
