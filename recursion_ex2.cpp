#include <iostream>

int power(int N, int M)
{
    if (M > 0)
        return (N * power(N, M-1));
    return (1);
}

int myPower(int Base, int Power)
{
    if (Power == 0) // this called base condition : its a MUST in recursion.. without it we would end up with a stack OVERFLOW
        return (1);
    else
        return (Base * myPower(Base, Power-1));
}

int main(void)
{
    int Number = 2;
    int M = 4;

    std::cout << "Power of : " << Number << "^" << M << " = " << power(Number, M) << std::endl;

    return (0);
}
