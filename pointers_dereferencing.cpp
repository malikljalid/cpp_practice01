#include <iostream>

int main(void)
{
    int  a;
    int *p;

    a = 13;
    p = &a;

    std::cout << "value of a   : " << a << '\n';
    std::cout << "adresse of a : " << &a << "\n\n";

    std::cout << "value of p   : " << p << '\n';
    std::cout << "adresse of p : " << &p << '\n';
    std::cout << "value of value of p (adresse of a) : " << *p << "\n\n";

    std::cout << "setting *p to 20\n";
    *p = 20;

    std::cout << " a = " << a << '\n';
    std::cout << "*p = " << *p << '\n';

    std::cout << "setting  a to 30\n";
    a = 30;

    std::cout << " a = " << a << '\n';
    std::cout << "*p = " << *p << '\n';

    return (0);
}
