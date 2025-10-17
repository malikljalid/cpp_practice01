#include <iostream>

int main(void)
{
    int             Mark = 20;
    std::string     Result;

    if (Mark >= 50)   // use normal IF to hundle PASS cases
        Result = "PASS";
    else
        Result = "FAIL";

    std::cout << Result << std::endl;

    Mark = 99;

    (Mark >= 50) ? Result = "PASS" : Result = "FAIL";  // using Short Hand IF or Ternary Operator ? 

    std::cout << Result << std::endl;
    
    return (0);
}
