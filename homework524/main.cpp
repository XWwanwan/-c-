#include <iostream>
using namespace std;

int main()
{
   int size;

   do
   {
      cout << "Enter an odd number for the diamond size (1-19): \n";
      cin >> size;
   } while ( ( size < 1 ) || ( size > 19 ) || ( ( size % 2 ) != 1 ) );

   for ( int rows = 1; rows <= size - 2; rows += 2 )
   {
      for ( int space = ( size - rows ) / 2; space > 0; space-- )
         cout << ' ';

      for ( int ster = 1; ster <= rows; ster++ )
         cout << '*';

      cout << '\n';
   }

   for ( int rows = size; rows >= 0; rows -= 2 )
   {
      for ( int space = ( size - rows ) / 2; space > 0; space-- )
         cout << ' ';

      for ( int ster = 1; ster <= rows; ster++ )
         cout << '*';

      cout << '\n';
   }

   cout << endl;
}
