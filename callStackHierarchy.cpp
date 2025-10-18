#include <iostream>

void function4(void)
{
    std::cout << "Hello, i am function4 why did you call me! How can i serve you?\n";
}

void function3(void)
{
    function4();
}

void function2(void)
{
    function3();
}

void function1(void)
{
    function2();
}

int main(void)
{
    function1();

    return (0);
}
