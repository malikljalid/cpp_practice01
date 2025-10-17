#include <iostream>

int main(void)
{
    std::cout << (12 | 25) << std::endl;

    //what's happening under the hood?
    // 12 in binary : 00001100
    // 25 in binary : 00011001
    // OR Operation of 12 and 25 :
    //      00001100
    // OR   00011001
    //      --------
    //      00011101 --> decimal = 29
    //
    // so 12 & 25 = 29

    return (0);
}

