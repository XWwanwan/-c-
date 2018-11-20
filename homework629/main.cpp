#include <iostream>
#include<cmath>
using namespace std;
bool shusu( int a)
{  bool x=false;
    int b=1;
    for(int i=2;i<a;i++)
    {
        if((fmod(a,i)==0))
        {
            x=true;
            break;
        }

    }
   return x;
}
int main()
{
    int a=0;
    for(int i=1;i<1000;i++)
    {
       if(shusu(i))

           cout<<i<<endl;
    }
    return 0;
}
