#include <iostream>

void printNumbersDown(int N, int M)
{
    if (N <= M)
    {
        std::cout << M << ' ';
        printNumbersDown(N, M-1);
    }
    if (N == M)
        std::cout << std::endl;
}

int main(void)
{
    printNumbersDown(1, 9);
    return (0);
}
