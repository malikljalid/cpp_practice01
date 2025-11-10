#pragma warning(4996)
#include <iostream>
#include <ctime>

// int tm_sec; --> seconds of minutes from 0 to 61  
// int tm_min; --> minutes of hour from 0 to 59  
// int tm_hour; --> hours of day from 0 to 24  
// int tm_mday; --> day of month from 1 to 31  
// int tm_mon; --> month of year from 0 to 11  
// int tm_year; --> year since 1900  
// int tm_wday; --> days since sunday  
// int tm_yday; --> days since January 1st  
// int tm_isdst; --> hours of daylight savings time

int main(void)
{
    time_t timeNow  = time(NULL);
    tm     *date    = localtime(&timeNow);

    std::cout << "Year  : " << date->tm_year + 1900 << std::endl;
    std::cout << "Month : " << date->tm_mon  << std::endl;
    std::cout << "Week  : " << date->tm_wday + 1<< std::endl;
    std::cout << "Day   : " << date->tm_mday << std::endl;
    std::cout << "Hour  : " << date->tm_hour << std::endl;
    std::cout << "Min   : " << date->tm_min  << std::endl;
    std::cout << "Sec   : " << date->tm_sec  << std::endl;
    std::cout << "Days since sunday : " << date->tm_wday << std::endl;
    std::cout << "Days since January 1st : " << date->tm_yday << std::endl;
    std::cout << "Hours of daylight savings time : " << date->tm_isdst << std::endl;

    return (0);
}
