#include <iostream>
#include<cmath>
using namespace std;
int inverse(int x)
{  int a=0;
    int d=x;
    while(x!=0)
    {
        x=int(x/10);
                a++;
    }
    int result=0;
    a=a-1;
    while(d!=0)
    {
        int c=fmod(d,10);
       result+=c*pow(10,a);
      d=int(d/10);
      a--;
    }
    return result;
}
int main()
{
    int a=123;
    int b=inverse(a);
    cout<<b;

    return 0;
}
