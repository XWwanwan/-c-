
#include<iostream>
#include<cmath>
using namespace std;
double circleArea(double x)
{
    return x*x*3.1415926;
}

int main()
{

    double x;
    cin>>x;
    cout<<circleArea(x)<<endl;
    return 0;
}
