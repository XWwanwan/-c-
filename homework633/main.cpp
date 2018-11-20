#include <iostream>
#include<cstdlib>
using namespace std;
int paoyingbi()
{
   int a=rand();
   int b=fmod(a,2);
   if(b==0)
       return 0;
   else
       return 1;
}

int main()
{
    for(int i=0;i<100;i++)
    {
    paoyingbi();
    }
    return 0;
}
