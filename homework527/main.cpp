#include <iostream>
using namespace std;

int main()
{
   for ( int number = 1; number <= 10; number++ )
   {
      if ( number != 5 )
         cout << number << " ";
   }
   cout << "\nUsed if condition to skip printing 5" << endl;
}
