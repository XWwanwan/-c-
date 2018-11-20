#include <iostream>
#include<cmath>
using namespace std;




int main()
{
    double a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

        if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)&&((a-b)<c)&&((a-c)<b)&&((b-c)<a))
           {
            cout<<"this is a triangle!"<<endl;
           }
        else
            cout<<"this is not a triangle!"<<endl;

}
