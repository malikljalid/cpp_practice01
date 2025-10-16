#pragma once

float   getFractionPartOf(float Number);
int     Last4DigitsOf(int Number);

namespace math
{
    int myAbs(int Number)
    {
        if (Number < 0)
            return (Number * -1);
        else
            return (Number);
    }

    float myRound(float Number)
    {
        float fractionPart = getFractionPartOf(Number);

        if (Number >= 0 && fractionPart < 0.5)
            return (Number - fractionPart);
        else if (Number >= 0 && fractionPart >= 0.5)
            return (Number - fractionPart + 1);
        else if (Number <  0 && fractionPart >= 0.5)
            return (Number + fractionPart - 1);
        else
            return (Number + fractionPart);
    }

    float myFloor(float Number)
    {
        float fractionPart = getFractionPartOf(Number);

        if (fractionPart == 0.0)
            return (Number);

        if (Number >= 0)
            return (Number - fractionPart);
        else
            return (Number + fractionPart - 1);
    }

    float myCeil(float Number)
    {
        float fractionPart = getFractionPartOf(Number);

        if (fractionPart == 0.0)
            return (Number);

        if (Number >= 0)
            return (Number - fractionPart + 1);
        else
            return (Number + fractionPart);
    }
}

int Last4DigitsOf(int Number)
{
    return (Number % 1000);
}

float getFractionPartOf(float Number)
{
    int FractionPart = math::myAbs((int)(Number * 1000));

    return (Last4DigitsOf(FractionPart) / (float)1000);
}
