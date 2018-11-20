

#include <iostream>
using namespace std;

int main()
{
   int number;

   bool check = false;

   for ( number = 1; ( number <= 10 ) && ( !check ); number++ )
   {
      if ( number == 5 )
         check = true;
      else
         cout << number << " ";
   }
   cout << "\nBroke out of loop because loop-continuation test "
      << "( !check ) failed." << endl;
}
