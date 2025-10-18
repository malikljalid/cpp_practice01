#include <iostream>

int sumOf(int a, int b, int c = 0, int d = 0)
{
	return (a + b + c + d);
}

int main(void)
{
	std::cout << sumOf(10, 20) << std::endl;
	std::cout << sumOf(10, 20, 13) << std::endl;
	std::cout << sumOf(10, 20, 13, 6) << std::endl;

	return (0);
}

