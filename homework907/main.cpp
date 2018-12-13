#include <iostream> 
#include "time.h" 
using namespace std;

int main()
{
  TTime t;

   t.set_Time( 23, 59, 57 );

    
   for ( int ticks = 1; ticks < 30; ++ticks ) 
   {
      t.printStandard(); 
      cout << endl;
      t.tick(); 
   } 
   return 0;
} 
