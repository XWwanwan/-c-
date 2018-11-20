#include <iostream>
#include<cmath>
using namespace std;




int main()
{
    double car1,car2,car3,charge1,charge2,charge3;
   cin>>car1;
   cin>>car2;
   cin>>car3;
   if(car1<=3)
   {
       charge1=2;
   }else if(car1>3&&car1<18)
       charge1=2+ceil(car1)*0.5-1.5;
   else
       charge1=10;

   //car1;
   if(car2<=3)
   {
       charge2=2;
   }else if(car2>3&&car2<18)
       charge2=2+ceil(car2)*0.5-1.5;
   else
       charge2=10;
   if(car3<=3)
   {
       charge3=2;
   }else if(car3>3&&car3<18)
       charge3=2+ceil(car3)*0.5-1.5;
   else
       charge3=10;
     cout<<"car"<<"     "<<"hour"<<"     "<<"charge"<<endl;

    cout<<"1   "<<"     "<<car1<<"     "<<charge1<<endl;
    cout<<"2   "<<"     "<<car2<<"     "<<charge2<<endl;
    cout<<"3   "<<"     "<<car3<<"     "<<charge3<<endl;
    cout<<"total"<<"     "<<car3+car1+car2<<"     "<<charge3+charge1+charge2<<endl;
}
