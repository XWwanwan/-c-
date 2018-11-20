#include <iostream>
#include<cstdlib>

using namespace std;
int main()
{
   int a=rand()/1000;
   cout<<"i have a number,guess it?"<<endl;
   int b=-1;
   while(b!=a)
   {
       cin>>b;
       if(a==b)
       {
           cout<<"excellent!"<<endl;
                 break;
       }
       else if(b<a)
           cout<<"too low"<<endl;
       else
               cout<<"too high"<<endl;
   }

return 0;
}
