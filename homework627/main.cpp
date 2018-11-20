#include <iostream>
//#include
using namespace std;
int main()
{
    double a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    double temp;
    if(a>=b)
        temp=b;
    else temp=a;
    if (temp>c)
        temp=c;
    cout<<temp<<endl;
    return 0;
}
