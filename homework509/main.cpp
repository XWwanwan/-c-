#include<iostream>
using namespace std;
int main()
{

    int result=1;
    for(int i=1;i<16;i++)
    {
        result*=i;
    }

    cout<<result<<endl;
    return 0;
}
