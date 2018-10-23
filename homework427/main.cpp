#include <QCoreApplication>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int BS1=0;
    int BS2=0;
    int temp1,temp2;
    int DS1=0;
    int DS2=0;

   cout<<"insert Binary System:";
     cin>>BS1;

    for(int i=0;BS1!=0;i++)
    {
        temp1=fmod(BS1,10);
        BS1=int(BS1/10);

        DS1+=temp1*pow(2,i);

    }
    cout<<"Decimal System:"<<DS1<<endl;
    //二进制转十进制


    cout<<"insert Decimal System:";
    cin>>DS2;

    for(int i=0;DS2!=0;i++)
    {

        temp2=fmod(DS2,2);
        DS2=int(DS2/2);
        BS2+=temp2*pow(10,i);

    }
    cout<<"Binary System:"<<BS2<<endl;
    //十进制转二进制
    //homework 4.27

    return 0;

}
