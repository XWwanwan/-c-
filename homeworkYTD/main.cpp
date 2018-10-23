#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class time
{
public:
time(int year1):year(year1)
{
    if( (fmod(year,100)!=0&&fmod(year,4)==0)||(fmod(year,400) == 0))
    {
      cout<<"it is a leap year" ;
    }
    cout<<"it is not a leap year";

}
private:
int year;
int month;
int day;
int hour;
int minute;
int second;


};


int main()
{
   time t(2017);

   return 0;
}
