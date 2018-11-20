#include <iostream>
using namespace std;

int main()
{
   int count = 0;
   long int hy1;
   long int side;

   cout << "Side 1\tSide 2\tSide3" << endl;

   for ( long side1 = 1; side1 <= 500; side1++ )
   {
      for ( long side2 = side1; side2 <= 500; side2++ )
      {
         for ( long hy1 = side2; hy1 <= 500; hy1++ )
         {
            hy1 = hy1 * hy1;

            side = side1 * side1 + side2 * side2;

            if ( hy1 == side )
            {
               cout << side1 << '\t' << side2 << '\t'
                  << hy1 << '\n';
               count++;
            }
         }
      }
   }

   cout << "A total of " << count << " triples were found." << endl;
}
