#include "Utils.h"

#include <ctime>
#include <time.h>
#include <sstream>

time_t GetDate(int year, int month, int day)
{
    std::tm tm;
    tm.tm_year = year;
    tm.tm_mon = month;
    tm.tm_mday = day;
    tm.tm_isdst = 0;
    return std::mktime(&tm);
}

string DateToString(time_t date)
{
    struct tm *tmInfo = localtime(&date);
    ostringstream outStream;
    outStream << "[ Year: " << tmInfo->tm_year << ", Month: " << tmInfo->tm_mon << ", Day: " << tmInfo->tm_mday << " ]";
    return outStream.str();
}
