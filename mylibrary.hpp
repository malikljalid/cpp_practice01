#pragma once

#include <iostream>

void helloWorld(std::string Msg)
{
    std::cout << Msg << std::endl;
}

namespace tools
{
    int sumOfTwo(int N1, int N2)
    {
        return (N1 + N2);
    }

    int subOfTwo(int N1, int N2)
    {
        return (N1 - N2);
    }

    int mulOfTwo(int N1, int N2)
    {
        return (N1 * N2);
    }

    float divOfTwo(int N1, int N2)
    {
        return (N1 / (float)N2);
    }
}
