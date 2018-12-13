#include <iostream>
#include "date.h"
using namespace std;

int main()
{
   const int MAXDAYS = 16;
   Date d( 11, 21, 2014 );
   for ( int i = 1; i <= MAXDAYS; ++i )
   {
      d.print();
      d.nextDay();
   }

   cout << endl;
}
