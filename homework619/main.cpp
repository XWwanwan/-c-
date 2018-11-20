#include <iostream>
#include<cmath>

using namespace std;
double  multiple(double a,double b)
{
   double c=sqrt(a*a+b*b);
   cout<<c<<endl;
   return c;
}
int main()
{
    multiple(3,4);
    multiple(5,12);
    multiple(8,15);
    return 0;
}
