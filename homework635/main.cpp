#include <iostream>


using namespace std;
int main()
{
   int a=rand()/1000;
   cout<<"i have a number,guess it?"<<endl;
   int b=-1;
   int number=0;
   if(b!=a)
   {
       cin>>b;
       number++;
       if(a==b)
       {
           cout<<"excellent!"<<endl;
                 break;
       }
       if(b<a)
           cout<<"too low"<<endl;
       else
               cout<<"too high"<<endl;
   }

}
