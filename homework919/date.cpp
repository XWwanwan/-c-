#include "date.h"
using namespace std;
date::date()
{
    time_t rawtime;
        struct tm *ptminfo;

        time(&rawtime);
        ptminfo = localtime(&rawtime);
        year=ptminfo->tm_year + 1900;
        month=ptminfo->tm_mon + 1;
        day=ptminfo->tm_mday;

}
void date::setDate( int month, int day, int year )
{
   setMonth( month );
   setDay( day );
   setYear( year );
}

void date::setDay( int day )
{
   if ( month == 2 && leapYear() )
      day = ( day <= 29 && day >= 1 ) ? day : 1;
   else
      day = ( day <= monthDays() && day >= 1 ) ? day : 1;
}

void date::setMonth( int m )
{
   month = m <= 12 && m >= 1 ? m : 1;
}

void date::setYear( int y )
{
   year = y >= 2000 ? y : 2000;
}
int date::getDay()
{
   return day;
}
int date::getMonth()
{
   return month;
}
int date::getYear()
{
   return year;
}

void date::print()
{
    cout << setfill( '0' ) << setw( 2 ) << getMonth() << ","
       << setw( 2 ) << getDay() << "," << setw( 2 ) << getYear()<<endl;
}
void date::nextDay()
{
   setDay( day + 1 );

   if ( day == 1 )
   {
      setMonth( month + 1 );

      if ( month == 1 )
         setYear( year + 1 );
   }
}

bool date::leapYear()
{
   if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
         return true;
      else
         return false;
}

int date::monthDays()
{
   const int days[ 12 ] =
     { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return month == 2 && leapYear() ? 29 : days[ month - 1 ];
}
