#include <iostream>
#include<cmath>
using namespace std;

class homework
{
  public:
    void circular(double rad)
    {   double pi=3.1414926;
        cout<<"diameter is :"<<2*rad<<endl;
        cout<<"the measure of area is :"<<pi*rad*rad<<endl;
        cout<<"the perimeter is :"<<2*pi*rad <<endl;

    }//4.30

};
int main()
{
   double rad;
   homework home4;
   cin>>rad;
   home4.circular(rad);
   return 0;
}
