#include <iostream>

void function(void)
{
    int normalVar = 0;

    std::cout << "normal variable : " << normalVar << std::endl;

    normalVar++;
}

void magicFunction(void)
{
    static int staticVar = 0;       // static variables allow you to expand the variable lifetime to the program's life time.. while keeping its scope to its function scope

    std::cout << "static variable : " << staticVar << std::endl;

    staticVar++;
}

int main(void)
{

    function();
    function();
    function();

    std::cout << "\n\n";

    magicFunction();        // magic happens by seeing that var got increamented by fct call
    magicFunction();
    magicFunction();

    return (0);
}
