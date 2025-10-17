#include <iostream>

int main(void)
{
    std::cout << (12 & 25) << std::endl;

    //what's happening under the hood?
    // 12 in binary : 00001100
    // 25 in binary : 00011001
    // & Operation of 12 and 25
    //   00001100
    // & 00011001
    //   --------
    //   00001000 --> decimal = 8
    //
    // so 12 & 25 = 8

    return (0);
}
