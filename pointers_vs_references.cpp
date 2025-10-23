#include <iostream>

int main(void)
{
    int     x;
    int     y;
    int    *p;
    int     &r = x;

    x = 13;
    p = &x;

    std::cout << "x adresse : " << &x << std::endl;
    std::cout << "r adresse : " << &r << std::endl;
    // x and r are the same variable with different names

    std::cout << "x adresse : " << &x << std::endl;
    std::cout << "p adresse : " << &p << std::endl;
    // x and p are not the same variables because each one has its own place in memory

    r = 42;
    std::cout << "x value : " << x << std::endl;
    std::cout << "r value : " << r << std::endl;
    // we can use r to change the value of a

    // r = &a;
    // &r = y;
    // but we cannot assing another adresse to r
    // we cant assing adresses to a reference in the first place
    // and we cannot re initilaize the refernce once again
    // in fact we can only initialize the refernce only one time and its in the declaration

    p = &y;
    std::cout << "y adresse : " << &x << std::endl;
    std::cout << "p value   : " << p << std::endl;
    // but taraa.. pointers come to give us this flexiblity doing whatever we want

    std::cout << std::endl;
    std::cout << "references are limited to the variables you assing to them in declaration\n";
    std::cout << "references connot be used without initilazation in declration\n";
    std::cout << "references cannot be set to a different variable during run time\n";
    std::cout << "pointers.. pointerzzz CAN!\n";
    return  (0);
}
