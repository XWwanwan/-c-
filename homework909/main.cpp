#include <iostream>
#include "dateandtime.h" // include definitions of class DateAndTime
using namespace std;

int main()
{
   const int MAXTICKS = 30;
   DateAndTime d( 12, 21, 2014, 23, 59, 57 );

   for ( int ticks = 1; ticks <= MAXTICKS; ticks++ )
   {
      cout << "Universal time: ";
      d.printUniversal();
      cout << "Standard  time: ";
      d.printStandard();
      d.tick();
   }
   cout << endl;
}
