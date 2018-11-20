
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int times = 0;
   int number;
   int largest;

   cout << "Enter the first number: ";
   cin >> largest;

   while ( ++times < 10 )
   {
      cout << "Enter the next number : ";
      cin >> number;


      if ( number > largest )
         largest = number;
   }

   cout << "Largest is " << largest << endl;
   return 0;
}
