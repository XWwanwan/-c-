
#include <iostream>
using namespace std;

int main()
{
   int number = 0;
   int number1;
   int number2;
   int number4;
   int number5;
   int digits = 0;

   while ( digits != 5 )
   {
      cout << "Enter a 5-digit number: ";
      cin >> number;

      if ( number < 100000 )
      {
         if ( number > 9999 )
            digits = 5;
         else
            cout << "Number must be 5 digits" << endl;
      }
      else
         cout << "Number must be 5 digits" << endl;
   }

   number1 = number / 10000;
   number2 = number % 10000 / 1000;
   number4 = number % 10000 % 1000 % 100 / 10;
   number5 = number % 10000 % 1000 % 100 % 10;

   if ( number1 == number5 )
   {
      if ( number2 == number4 )
         cout << number << " is a palindrome!!!" << endl;
      else
         cout << number << " is not a palindrome." << endl;
   }
   else
      cout << number << " is not a palindrome." << endl;
}
