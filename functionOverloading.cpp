#include <iostream>

int sumOf2Integers(int a, int b)
{
    return (a + b);
}

double sumOf2Doubles(double a, double b)
{
    return (a + b);
}

int sumOf3Integers(int a, int b, int c)
{
    return (a + b + c);
}

int sumOf4Integers(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

double sum(double a, double b)
{
    return (a + b);
}

int sum(int a, int b)
{
    return (a + b);
}

int sum(int a, int b, int c)
{
    return (a + b + c);
}

int sum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

int main(void)
{
    // old style creating each function for different purposes
    std::cout << sumOf2Doubles(42.01, 13.37) << std::endl;
    std::cout << sumOf2Integers(20, 6) << std::endl;
    std::cout << sumOf3Integers(20, 6, 13) << std::endl;
    std::cout << sumOf4Integers(20, 6, 13, 1) << std::endl;


    // overloading style.. creating a function with the same name but different purpose by using different paramaters type and numbres
    std::cout << sum(42.01, 13.37) << std::endl;
    std::cout << sum(6, 13) << std::endl;
    std::cout << sum(6, 13, 20) << std::endl;
    std::cout << sum(6, 13, 20, 1) << std::endl;

    return (0);
}
