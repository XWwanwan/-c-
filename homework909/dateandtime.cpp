#include "Dateandtime.h"
#include<iostream>
#include <iomanip>

using namespace std;
DateAndTime::DateAndTime(
    int m, int d, int y, int hr, int min, int sec )
{
   setDate( m, d, y );
   set_Time( hr, min, sec );
}
void DateAndTime::setDate( int month, int day, int year )
{
   setMonth( month );
   setDay( day );
   setYear( year );
}

void DateAndTime::setDay( int day )
{
   if ( month == 2 && leapYear() )
      day = ( day <= 29 && day >= 1 ) ? day : 1;
   else
      day = ( day <= monthDays() && day >= 1 ) ? day : 1;
}

void DateAndTime::setMonth( int m )
{
   month = m <= 12 && m >= 1 ? m : 1;
}

void DateAndTime::setYear( int y )
{
   year = y >= 2000 ? y : 2000;
}
int DateAndTime::getDay()
{
   return day;
}
int DateAndTime::getMonth()
{
   return month;
}
int DateAndTime::getYear()
{
   return year;
}

void DateAndTime::print()
{
   cout << month << '-' << day << '-' << year << '\n';
}
void DateAndTime::nextDay()
{
   setDay( day + 1 );

   if ( day == 1 )
   {
      setMonth( month + 1 );

      if ( month == 1 )
         setYear( year + 1 );
   }
}

bool DateAndTime::leapYear()
{
   if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
         return true;
      else
         return false;
}

int DateAndTime::monthDays()
{
   const int days[ 12 ] =
     { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return month == 2 && leapYear() ? 29 : days[ month - 1 ];
}
void DateAndTime::set_Time( int h, int m, int s )
{
   set_Hour( h );
   set_Minute( m );
   set_Second( s );
}


void DateAndTime::set_Hour( int h )
{
   hour = ( h >= 0 && h < 24 ) ? h : 0;
}

void DateAndTime::set_Minute( int m )
{
   minute = ( m >= 0 && m < 60 ) ? m : 0;
}


void DateAndTime::set_Second( int s )
{
   second = ( s >= 0 && s < 60 ) ? s : 0;
}


int DateAndTime::get_Hour()
{
   return hour;
}
int DateAndTime::get_Minute()
{
   return minute;
}
int DateAndTime::get_Second()
{
   return second;
}
void DateAndTime::tick()
{
   set_Second( get_Second() + 1 );

   if ( get_Second() == 0 )
   {
      set_Minute( get_Minute() + 1 );
      if ( get_Minute() == 0 )
         {
          set_Hour( get_Hour() + 1 );
          if ( hour == 0 )
             nextDay();}
   }
}
void DateAndTime::printStandard()
{
   cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second
      << ( hour < 12 ? " AM " : " PM " )
      << month << '-' << day << '-' << year << endl;
}

void DateAndTime::printUniversal()
{
   cout << ( hour < 10 ? "0" : "" ) << hour << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second << "    "
      << month << '-' << day << '-' << year << endl;
}
