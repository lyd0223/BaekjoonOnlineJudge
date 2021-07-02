#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{   
    time_t timeTemp = time(&timeTemp);
    struct tm* timeinfo;
    
    timeinfo = gmtime(&timeTemp);
    
    
    string year = to_string(timeinfo->tm_year + 1900);
    string month = "";
    if (timeinfo->tm_mon + 1 < 10)
    {
        month += "0";
    }
    month += to_string(timeinfo->tm_mon+1);
    string day = "";
    if (timeinfo->tm_mday < 10)
    {
        day += "0";
    }
    day += to_string(timeinfo->tm_mday);
    //cout << asctime(timeinfo);
    cout << year << "-" << month << "-" << day;
}