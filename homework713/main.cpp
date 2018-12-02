#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int ,20> temp_array={};
    int temp=0;
    size_t t=0;
    for(size_t i=0;i<20;i++)
    {

        cin>>temp;
        for(size_t j=0;j<=t;j++)
        {
        if(temp==temp_array[j])
        {
            int e=0;
        }else
        {
          temp_array[t]=temp;
          t++;
        }
        }
    }

}
