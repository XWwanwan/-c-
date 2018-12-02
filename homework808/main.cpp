#include<iostream>
using namespace std;
int main()
{ size_t SIZE=5;
    unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr=values;
    for(int i=0;i<5;i++)
    {
        cout<<values[i]<<endl;
    }
    for(int i=0;i<5;i++)
    {
        cout<<vPtr[i]<<endl;
    }

    for(int i=0;i<5;i++)
    {
        cout<<*(vPtr+i)<<endl;
    }

     cout<<values[4]<<endl;
      cout<<vPtr[4]<<endl;

     cout<<*(vPtr+4)<<endl;
     return 0;
}
