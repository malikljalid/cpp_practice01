#include <stdio.h>

int multiply(int a, int b)
{
    int result = 0;

    for (int i = 0; i < b; i++)
    {
        result += a;
    }

    return result;
}

int main(void)
{
    int x = 5;
    int y = 3;
    int product = multiply(x, y);

    printf("The result is %d\n", product);

    if (product > 10)
        printf("Product is greater than 10\n");
    else
        printf("Product is 10 or less\n");

    return 0;
}
