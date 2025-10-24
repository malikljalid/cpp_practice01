#include <iostream>

void swap(int &a, int &b)
{
    int tmp;

    tmp = a;
    a   = b;
    b   = tmp;
}

void _swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a  = *b;
    *b  = tmp;
}

int main(void)
{
    int a = 20;
    int b = 6;

    std::cout << "\nBefore swap : \n";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swap(a, b);
    std::cout << "\nAfter swap : \n";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    _swap(&a, &b);
    std::cout << "\nAfter swap again : \n";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return (0);
}
