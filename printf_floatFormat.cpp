#include <iostream>

int main(void)
{
    const float PI = 3.14159265;

    //Precision specification
    printf("PI = %f\n\n", PI);
    printf("Precision specification of %.*f\n", 1, PI);
    printf("Precision specification of %.*f\n", 2, PI);
    printf("Precision specification of %.*f\n", 3, PI);
    printf("Precision specification of %.*f\n", 4, PI);

    float x = 7.0;
    float y = 9.0;

    printf("\nThe float division of %.3f / %.3f = %.3f\n", x, y, x / y);

    double d = 13.37;

    printf("\nThe double value of d is : %.*f\n", 3, d);
    printf("\nThe double value of d is : %.4f\n", d);

    return (0);
}
