#include<iostream>
#include<array>
#include<vector>

using namespace std;
int main()
{
    array<int ,11>temp={};
    int x=rand()%6+1;
    int y=rand()%6+1;
    int z=x+y;
    if(y==2)
    {
        temp[0]+=1;
    }else if(y==3)
    {
        temp[1]+=1;
    }else if(y==4)
    {
        temp[2]+=1;
    }
    else if(y==5)
        {
            temp[3]+=1;
        }
    else if(y==6)
        {
            temp[4]+=1;
        }
    else if(y==7)
        {
            temp[5]+=1;
        }

    else if(y==8)
        {
            temp[6]+=1;
        }
    else if(y==9)
        {
            temp[7]+=1;
        }
    else if(y==10)
        {
            temp[8]+=1;
        }
    else if(y==11)
        {
            temp[9]+=1;
        }


    else if(y==12)
        {
            temp[10]+=1;
        }
    else
        {
        int a=0;
    }
    return 0;

}
