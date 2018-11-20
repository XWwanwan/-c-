#include <iostream>
#include<cmath>

using namespace std;
bool  iseven(int b)
{   bool aaa=true;
    double c=fmod(b,2);

   if(c!=0)
   aaa=false;
   return aaa;
}
int main()
{
    int a;
    cin>>a;
    iseven(a);
    return 0;
}
