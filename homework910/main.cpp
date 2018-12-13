#include <iostream>
#include "time.h"
using namespace std;
int getMenuChoice();

int main()
{
   TTime time;
   int choice = getMenuChoice();
   int hours;
   int minutes;
   int seconds;

   while ( choice != 4 )
   {
      switch ( choice )
      {
         case 1:
            cout << " Hours: ";
            cin >> hours;

            if ( !time.setHour( hours ) )
               cout << "Invalid hours." << endl;
            break;
         case 2:
            cout << " Minutes: ";
            cin >> minutes;

            if ( !time.setMinute( minutes ) )
               cout << "Invalid minutes." << endl;
            break;
         case 3:
            cout << "Enter Seconds: ";
            cin >> seconds;

            if ( !time.setSecond( seconds ) )
               cout << "Invalid seconds." << endl;
            break;
      }

      cout << "Hour: " << time.get_Hour() << " Minute: "
         << time.get_Minute() << " Second: " << time.get_Second() << endl;
      cout << "Universal time: ";
      time.printUniversal();
      cout << " Standard time: ";
      time.printStandard();
      cout << endl;

      choice = getMenuChoice();
   } }


int getMenuChoice()
{
   int choice;

   cout << "1. Hour\n2.  Minute\n3.  Second\n"
      << "4. Exit\nChoice: " << endl;
   cin >> choice;
   return choice;
}
