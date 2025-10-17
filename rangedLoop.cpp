#include <iostream>

int main(void)
{
    int Array[] = { 1, 9, 13, 7, 20, 21, 6 };

    for (int elem : Array)
        std::cout << elem << std::endl;

    for (std::string elem : {"Zakaria", "Adriouche", "Niveau", "Jesus", "Ichigo"})
        std::cout << elem << std::endl;

    return (0);
}
