#include <iostream>

void printNumbers(int N, int M)
{
    if (N <= M)
    {
        std::cout << N << ' ';
        printNumbers(N+1, M);
    }
    if (N == M)
        std::cout << std::endl;
}

int main(void)
{
    printNumbers(1, 9);
    return (0);
}
