#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<array<int,2>,3> t={};

    t[0][1]=0;
   // t=;
    for(size_t i=0;i<2;i++)
    {
        for(size_t j=0;j<3;j++)
        {
           t[i][j]=0;
        }
    }
    //(h)
    int temp;
    for(size_t i=0;i<2;i++)
    {
        for(size_t j=0;j<3;j++)
        {
            cin>>temp;
           t[i][j]=temp;
        }
    }
    int min=t[0][0];
    for(size_t i=0;i<2;i++)
    {
        for(size_t j=0;j<3;j++)
        {
            if(min>t[i][j])
            {
                min=t[i][j];
            }
        }
    }
    cout<<"min is"<<min<<endl;//(l)
    int sum1=0;
    for(size_t j=0;j<3;j++)
    {
        sum1+=t[0][j];
    }
    int sum2=0;
    for(size_t j=0;j<2;j++)
    {
        sum2+=t[j][1];
    }

    cout<<" "<<"1"<<"2"<<"3"<<endl;
    for(size_t i=1;i<3;i++)
    {
      cout<<i<<t[i-1][0]<<t[i-1][0]<<t[i-1][0]<<endl;
    }
    return 0;

}
