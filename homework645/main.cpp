#include <iostream>
#include <cmath>
using namespace std;

int mystery(int a,int b)
{
    if(b>0)
    {
        if(1==b)
        {
            return a;
        }
        else
            return a+mystery(a,b-1);
    }
    else if(b<0)
        if(-1==b)
        {
            return a;
        }
        else
            return -a+mystery(a,b-1);
    else return 1;

}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"the result is :"<<mystery(x,y);
    return 0;
}
