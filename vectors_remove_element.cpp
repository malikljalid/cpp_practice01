#include <iostream>
#include <vector>

int main(void)
{
    std::vector <int> vNumbers;

    vNumbers.push_back(20);
    vNumbers.push_back(13);
    vNumbers.push_back(6);

    vNumbers.pop_back();                    // removes the last element pushed from the vector

    for (int &Number : vNumbers)            // lets see what is in the vector now
        std::cout << Number << std::endl;

    return (0);
}
