#include <iostream>
//#include
using namespace std;
double celsius (double a)
{
    double f=(a-32)/1.8;
    return f;
}
double fahrenheit (double a)
{
    double f=32+a*1.8;
    return f;
}

int main()
{
    cout<<"fahrenheit:"<<endl;
    for(int i=0;i<101;i++)
    {
       cout<<i<"       "<fahrenheit(i)<<endl;
    }
    cout<<"celsius:"<<endl;
    for(int i=32;i<212;i++)
    {
       cout<<i<"       "<fahrenheit(i)<<endl;
    }

    return 0;
}
