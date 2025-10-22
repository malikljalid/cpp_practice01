#include <iostream>

void change_a_byValue(int x)
{
    x++;
}

void change_a_byRef(int &x)
{
    x++;
}

void print_a_Value(std::string msg, int a)
{
    std::cout << std::endl;
    std::cout << msg << a << std::endl;
}

int main(void)
{
    int a = 13;

    print_a_Value("before any change : ", a);

    change_a_byValue(a);
    print_a_Value("after change by Value : ", a);

    change_a_byRef(a);
    print_a_Value("after change by Reference : ", a);

    return (0);
}
