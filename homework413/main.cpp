
#include <iostream>
using namespace std;

int main()
{
   double number;
   double miles;
   double total1 = 0;
   double total2 = 0;

   double milesPerGallon;
   double total2PerGallon;


   cout << "Enter miles driven (-1 to quit): ";
   cin >> miles;
   cout << fixed;

   while ( miles != -1 )
   {
      cout << "Enter number used: ";
      cin >> number;

      total2 += miles;
      total1 += number;

      if ( number != 0 )
      {
         milesPerGallon =  miles / number;
         cout << "MPG this tankful: " << milesPerGallon;
      }

      if ( total1 != 0 )
      {
         total2PerGallon = total2 / total1;
         cout << "\nTotal MPG: " << total2PerGallon;
      }

      cout << "\n\nEnter miles driven (-1 to quit): ";
      cin >> miles;
   }
}
