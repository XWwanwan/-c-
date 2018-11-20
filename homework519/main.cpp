#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long double pi = 0.0;
   long double nom = 1.0;
   long accuracy = 1000;

   cout << fixed << setprecision( 8 );

   cout << "Accuracy set at: " << accuracy << "\n\nterm\t\tpi\n";

   for ( long loop = 1; loop <= accuracy; loop++ )
   {
      if ( loop % 2 != 0 )
         pi += 4.0 / nom;
      else
         pi -= 4.0 / nom;


      cout << loop << "\t\t" << pi << '\n';

      nom += 2.0;
   } // end for

   cout << endl;
}
