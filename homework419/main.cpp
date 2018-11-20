
#include <iostream>
using namespace std;

int main()
{
   int counter = 0;
   int number;
   int largest;
   int secondL;
   cout << "Enter the first number: ";
   cin >> largest;

   cout << "Enter next number: ";
   cin >> number;


   if ( number > largest )
   {
      secondL = largest;
      largest = number;
   }
   else
      secondL = number;

   counter = 2;

   while ( counter < 10 )
   {
      cout << "Enter next number: ";
      cin >> number;

      if ( number > largest )
      {
         secondL = largest;
         largest = number;
      }
      else if ( number > secondL )
         secondL = number;

      counter++;
   }

   cout << "\nLargest is " <<  largest
      << "\nSecond largest is " << secondL << endl;
}
