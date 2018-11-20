#include <iostream>
#include<cmath>
using namespace std;
int roundToInteger(double x)
{
    int y=floor(x+0.5);
    cout<<a<<endl;
    cout<<y<<endl;

    return y;
}
double roundToTenths(double x)
{
    int y=floor(x*10+0.5)/10;
    cout<<a<<endl;
    cout<<y<<endl;
    return y;
}
double roundToHundredths(double x)
{
    int y=floor(x*100+0.5)/100;
    cout<<a<<endl;
    cout<<y<<endl;
    return y;
}
double roundToInteger(double x)
{
    int y=floor(x*1000+0.5)/1000;
    cout<<a<<endl;
    cout<<y<<endl;
    return y;
}


int main()
{

  cout<<"hello!"<<endl;
    return 0;
}
