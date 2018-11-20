#include <iostream>
#include<cmath>

using namespace std;
bool  multiple(double a,double b)
{   bool aaa=true;
    double c=b/a;
    double d=c-int(c);
   if(d!=0)
   aaa=false;
   return aaa;
}
int main()
{
    multiple(3,4);
    multiple(5,12);
    multiple(8,15);
    return 0;
}
