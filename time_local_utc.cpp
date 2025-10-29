#include <iostream>
#include <ctime>

void timeToLocal(time_t timeNow)
{
    std::cout << "Local time now  : " << ctime(&timeNow) << std::endl;
}

void timeToUTC(time_t timeNow)
{
    tm *gmt = gmtime(&timeNow);

    std::cout << "Time in UTC now : " << asctime(gmt) << std::endl;
}

int main(void)
{
    time_t timeNow = time(NULL);

    timeToLocal(timeNow);
    timeToUTC(timeNow);

    return (0);
}
