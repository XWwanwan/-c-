
#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a*a+b*b)==c*c||(a*a+c*c)==b*b||(c*c+b*b)==a*a)
    {
     cout<<"this is a right triangle!"<<endl;
    }
 else
     cout<<"this is not a right triangle!"<<endl;
}
