#include <iostream>
#include <cctype>

int main(void)
{
    char x = 'A';
    char y = 'x';

    std::cout << y << " --> " << (char)toupper(y) << std::endl;
    std::cout << x << " --> " << (char)tolower(x) << std::endl;

    std::cout << "isupper('A') : " << isupper('A') << std::endl;
    std::cout << "islower('A') : " << islower('A') << std::endl;
    std::cout << "isdigit('3') : " << isdigit('3') << std::endl;
    std::cout << "ispunct('$') : " << ispunct('$') << std::endl;

    return (0);
}
