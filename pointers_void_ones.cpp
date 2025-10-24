#include <iostream>

int main(void)
{
    void    *ptr;
    int     a;
    float   b;

    a = 13;
    b = 20.00;

    ptr = &a;
    std::cout << "a   = " << a << std::endl;
    std::cout << "ptr = " << *(int *)ptr << std::endl;
    std::cout << std::endl;

    ptr = &b;   // here is void ptr super power : can hold adresse of different types of data
    std::cout << "b   = " << b << std::endl;
    std::cout << "ptr = " << *((float *)ptr) << std::endl;   // but to dereference it you should always EXPLICITLY type cast it to holded data type

    return (0);
}
