#include <iostream>

int main(void)
{
    int a   = 20;
    int &r  = a;

    std::cout << "a value : " << a << std::endl;
    std::cout << "r value : " << r << std::endl;

    std::cout << "a adresse : " << &a << std::endl;
    std::cout << "r adresse : " << &r << std::endl;

    a = 13;

    std::cout << "a value : " << a << std::endl;
    std::cout << "r value : " << r << std::endl;   

    return (0);
}
