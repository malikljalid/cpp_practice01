#include <iostream>

int main(void)
{
    char Name[]         = "Zacharia The Monster";
    char SchoolName[]   = "School of Monsters";

    printf("Dear  %s,\n", Name);
    printf("Welcome to  %s.\n", SchoolName);

    char c = 'z';

    // control the width of printing a character
    printf("%c\n", c);
    printf("%*c\n", 1, c);
    printf("%*c\n", 2, c);
    printf("%*c\n", 3, c);
    printf("%*c\n", 4, c);

    return (0);
}
