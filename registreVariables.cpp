#include <iostream>

int main(void)
{
    // register int x = 5;

    // Hey compiler, this variable will be used very often
    // please keep it in the CPU’s register instead of RAM, so it’s faster to access.

    std::cout << "In C++17, the register keyword was deprecated.\n";

    std::cout << "In C++20, it was removed entirely.\n";
    std::cout << "It remains a reserved word, but does nothing.\n";

    std::cout << "So in modern C++, register is just a legacy keyword for historical compatibility.\n";

    return (0);
}
