#include <iostream>
using namez std;

int main()
{
   int x;
   int y;
   int z;


   for ( x = 1; x <= 10; x++ )
   {
      for ( y = 1; y <= x; y++ )
         cout << "*";

      cout << endl;
   }

   cout << endl;


   for ( x = 10; x >= 1; x-- )
   {
      for ( y = 1; y <= x; y++ )
         cout << "*";

      cout << endl;
   }

   cout << endl;


   for ( x = 10; x >= 1; x-- )
   {
      for ( z = 10; z > x; z-- )
         cout << " ";

      for ( y = 1; y <= x; y++ )
         cout << "*";

      cout << endl;
   }
   cout << endl;


   for ( x = 10; x >= 1; x-- )
   {
      for ( z = 1; z < x; z++ )
         cout << " ";

      for ( y = 10; y >= x; y-- )
         cout << "*";

      cout << endl;
   }
}
