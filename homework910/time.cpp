#include "time.h"
#include<iostream>
#include<iomanip>
using namespace std;

bool TTime::setTime( int h, int m, int s )
{
   bool hourValid = setHour( h );
   bool minuteValid = setMinute( m );
   bool secondValid = setSecond( s );
   return hourValid && minuteValid && secondValid;
}

bool TTime::setHour( int hr )
{
   if ( hr >= 0 && hr < 24 )
   {
      hour = hr;
      return true;
   }
   else
   {
      hour = 0;
      return false;
   }
}

bool TTime::setMinute( int min )
{
   if ( min >= 0 && min < 60 )
   {
      minute = min;
      return true;
   }
   else
   {
      minute = 0;
      return false;
   }
}

bool TTime::setSecond( int sec )
{
   if ( sec >= 0 && sec < 60 )
   {
      second = sec;
      return true;
   }
   else
   {
      second = 0;
      return false;
   } T
}


int TTime::get_Hour()
{
   return hour;
}
int TTime::get_Minute()
{
   return minute;
}
int TTime::get_Second()
{
   return second;
}
void TTime::tick()
{
   setSecond( get_Second() + 1 );

   if ( get_Second() == 0 )
   {
      setMinute( get_Minute() + 1 );
      if ( get_Minute() == 0 )
         setHour( get_Hour() + 1 ); }
}
void TTime::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << get_Hour() << ":"
      << setw( 2 ) << get_Minute() << ":" << setw( 2 ) << get_Second();
}
void TTime::printStandard()
{
   cout << ( ( get_Hour() == 0 || get_Hour() == 12 ) ? 12 : get_Hour() % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << get_Minute()
      << ":" << setw( 2 ) << get_Second() << ( hour < 12 ? " AM" : " PM" );
}
