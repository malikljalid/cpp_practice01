#include <iostream>

int main(void)
{
    int     *ptrX;
    float   *ptrY;

    // dynamically allocat memory for ptrX and ptrY
    ptrX = new int;
    ptrY = new float;

    *ptrX = 6;
    *ptrY = 13.37;

    std::cout << *ptrX << std::endl;
    std::cout << *ptrY << std::endl;

    //dynamically free memory for ptrX and ptrY
    delete ptrX;
    delete ptrY;

    return (0);
}
