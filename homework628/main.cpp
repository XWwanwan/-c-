#include <iostream>
#include<cmath>
using namespace std;
void isperfect( int a)
{
    int b=1;
    for(int i=1;i<a;i++)
    {
        if((fmod(a,i)==0)&&a!=(a/i))
        {
            b+=i;
        }

    }
    if(a==b)
    {
       cout<<a<<endl;
    }
    //return 0;
}
int main()
{
    int a=0;
    for(int i=1;i<1000;i++)
    {
       isperfect(i) ;
    }
    return 0;
}
