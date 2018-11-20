
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int result=0;
    for(int i=0;i<num;i++)
    {
        int value;
        cin>>value;
        result+=value;
    }
    cout<<result<<endl;
    return 0;
}
