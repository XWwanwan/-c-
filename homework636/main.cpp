#include <iostream>
using namespace std;
int power(int base,int exponent)
{
    int result=base;
    while(exponent>1)
    {
        exponent--;
        result*=power(base,exponent);
    }
    return result;
}

int main()
{
    int a=4;
    int b=2;
  int c= power(a,b);
  cout<<c;
}
