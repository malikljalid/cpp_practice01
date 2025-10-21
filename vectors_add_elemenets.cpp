#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> vNumbers;

    vNumbers.push_back(13);
    vNumbers.push_back(6);
    vNumbers.push_back(20);

    for (int &Number : vNumbers)
        std::cout << Number << std::endl;
    
    return (0);
}
