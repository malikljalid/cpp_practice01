#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> Numbers { 13, 20, 6, 37 };

    try
    {
        std::cout << Numbers.at(7) << std::endl;
    }
    catch(...)
    {
        std::cout << "Error! Out of range!\n";
    }
    
    return (0);
}
