#include <iostream>

int main(void) 
{
    int     x;
    int    *p;

    // p = x; mistake 1 : dont assigne a value to a pointer 

    p = &x;     // correct <-- assigne an adresse

    // *p = &x; mistake 2 : dont assigne an adresse to deferenced pointer

    *p = x;     // correct <-- assinge a value of the pointer type

    return (0);
}
