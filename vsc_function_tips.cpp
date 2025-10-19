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
    function4();
}

// expand & collapse the rang of a fct()
// Go to difintion of a fct()
// Go to declaration of a fct()
// Show call heirarchy of fct()
// Find all references of fct()
// Rename a function name and apply to the entire code

int main(void)
{
    function1();

    return (0);
}
