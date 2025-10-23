#include <iostream>

int main(void)
{
    int     x = 6;
    int    *p = &x;

    std::cout << "x value   : " << x << std::endl;
    std::cout << "x adresse : " << &x << std::endl << std::endl;

    std::cout << "p value   : " << p << std::endl;
    std::cout << "p adresse : " << &p << std::endl << std::endl;

    int y = 20;
    p = &y;
   
    std::cout << "x value   : " << y << std::endl;
    std::cout << "x adresse : " << &y << std::endl << std::endl;

    std::cout << "p value   : " << p << std::endl;
    std::cout << "p adresse : " << &p << std::endl << std::endl;

    return (0);
}
