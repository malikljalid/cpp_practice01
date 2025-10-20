#include <iostream>

int main(void)
{
    int Page = 1;
    int TotalPages = 10;

    // print string and int variable
    printf("Page number : %d\n", Page);
    printf("You are in page %d of %d \n\n", Page, TotalPages);

    // width specification
    printf("The page number : %*d\n", 1, Page);
    printf("The page number : %*d\n", 2, Page);
    printf("The page number : %*d\n", 3, Page);
    printf("The page number : %*d\n", 4, Page);

    int Number1 = 13;
    int Number2 = 20;

    printf("\n%d + %d = %d\n", Number1, Number2, Number1 + Number2);

    return (0);
}
