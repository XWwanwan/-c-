#include <iostream>
#include "date.h"
using namespace std;

Date::Date( int m, int d, int y )
{
   setDate( m, d, y );
}

void Date::setDate( int month, int day, int year )
{
   setMonth( month );
   setDay( day );
   setYear( year );
}

void Date::setDay( int day )
{
   if ( month == 2 && leapYear() )
      day = ( day <= 29 && day >= 1 ) ? day : 1;
   else
      day = ( day <= monthDays() && day >= 1 ) ? day : 1;
}

void Date::setMonth( int m )
{
   month = m <= 12 && m >= 1 ? m : 1;
}

void Date::setYear( int y )
{
   year = y >= 2000 ? y : 2000;
}
int Date::getDay()
{
   return day;
}
int Date::getMonth()
{
   return month;
}
int Date::getYear()
{
   return year;
}

void Date::print()
{
   cout << month << '-' << day << '-' << year << '\n';
}
void Date::nextDay()
{
   setDay( day + 1 );

   if ( day == 1 )
   {
      setMonth( month + 1 );

      if ( month == 1 )
         setYear( year + 1 );
   }
}

bool Date::leapYear()
{
   if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
         return true;
      else
         return false;
}

int Date::monthDays()
{
   const int days[ 12 ] =
     { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return month == 2 && leapYear() ? 29 : days[ month - 1 ];
}
