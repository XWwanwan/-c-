
#include<iostream>
#include<cstdlib>
using namespace std;

void three1(int &s)
{
    s*=3;
    cout<<"three12:"<<s<<endl;
}
void three2(int s)
{
    s*=3;
    cout<<"three22:"<<s<<endl;
}
int main()
{
    int c=4;
    int b=4;
    three1(c);
    cout<<"three11:"<<c<<endl;
    three2(b);
    cout<<"three21:"<<b<<endl;
    return 0;
}
