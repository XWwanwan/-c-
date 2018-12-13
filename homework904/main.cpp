#include<iostream>
#include<ctime>
#include "Time.h"
using namespace std;
class Time
{
     double hour;
     double minute;
     double second;

    Time()
    {
        const time_t currentTime = time(0);
        const tm *localTime = localtime( &currentTime );
         setTime( localTime->tm_hour, localTime->tm_min, localTime->tm_sec );

    }
    void setTime( int h, int m, int s )
    {
       hour = ( h >= 0 && h < 24 ) ? h : 0; // validate hour
       minute = ( m >= 0 && m < 60 ) ? m : 0; // validate minute
       second = ( s >= 0 && s < 60 ) ? s : 0; // validate second
    }
};
