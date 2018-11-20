#include <iostream>
#include<cmath>
using namespace std;




int main()
{
    int a;
    cin>>a;

    int result=1;
    while(a!=1)
    {
      result=a*result;
      a--;

    }
    cout<<"the result is "<<result<<endl;
    return 0;
}
