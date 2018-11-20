#include <iostream>
#include<cmath>
using namespace std;

double integerPower(double base,int exponent)
{
    double result=1;
    for(int i=0;i<exponent;i++)
    {
        result*=base;
    }
    return result;
}

int main()
{
    cout<<integerPower(2,3);
    return 0;
}

