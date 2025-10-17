#include <iostream>

enum enNumberCase { NEGATIVE=-1, ZERO, POSITIVE };

enNumberCase checkNumber(int Number)
{
    return ((Number >= 0) ? POSITIVE : NEGATIVE);
}

enNumberCase checkNumberPro(int Number)
{
    return ((Number == 0) ? ZERO : ((Number > 0) ? POSITIVE : NEGATIVE)); 
}

void printNumberCase(int Number)
{
    switch (checkNumberPro(Number))
    {
        case (enNumberCase::POSITIVE) :
        {
            std::cout << "Number is POSTIVE\n";
            break;
        }

        case (enNumberCase::NEGATIVE) :
        {
            std::cout << "Number is NEGATIVE\n";
            break;
        }

        default :
            std::cout << "Number is ZERO\n";
    }
}

int main(void)
{
    printNumberCase(-42);

    return (0);
}
