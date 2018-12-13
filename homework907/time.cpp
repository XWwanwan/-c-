#include "time.h"

#include <iostream>
#include <iomanip>
using namespace std;


TTime::TTime( int hr, int min, int sec )                   
{                                                        
   set_Time( hr, min, sec );     
} 
void TTime::set_Time( int h, int m, int s )
{
   set_Hour( h ); 
   set_Minute( m ); 
   set_Second( s );
} 


void TTime::set_Hour( int h )
{
   hour = ( h >= 0 && h < 24 ) ? h : 0; 
} 

void TTime::set_Minute( int m )
{
   minute = ( m >= 0 && m < 60 ) ? m : 0;
} 


void TTime::set_Second( int s )
{
   second = ( s >= 0 && s < 60 ) ? s : 0; 
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
   set_Second( get_Second() + 1 ); 

   if ( get_Second() == 0 ) 
   {
      set_Minute( get_Minute() + 1 );
      if ( get_Minute() == 0 )
         set_Hour( get_Hour() + 1 ); }
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
