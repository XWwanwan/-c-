#include<iostream>
#include<Package.h>
#include<vector>
using namespace std;

int main()
{

    PersonContact P1,P2;
    P1.mAddress ="QingDao";
    P1.mCity    ="Jinan";
    P1.mName    ="Wana";
    P1.mPostCode=1999;
    P1.mState   ="China";
    P2.mAddress ="Chengdu";
    P2.mCity    ="Nanjing";
    P2.mName    ="Lilith";
    P2.mPostCode=1989;
    P2.mState   ="China";
    TwoDayPackage towpack(P1,P2,10,2.3,5);
    OvernightPackage overnight(P1,P2,12,23,1);

    vector<Package*> packagg;
    packagg.resize(2);

    packagg[0]=&towpack;

    packagg[1]=&overnight;





    for(size_t i=0;i<packagg.size();i++)
    {
        cout<<"the"<<i+1<<"th package :"<<packagg[i]->calculateCost();
        cout<<"receiver:"<<endl;

        cout<<"address:"<<packagg[i]->receiver().mAddress<<endl;
        cout<<"city:"<<packagg[i]->receiver().mCity<<endl;
        cout<<"Name:"<<packagg[i]->receiver().mName<<endl;
        cout<<"PostCode:"<<packagg[i]->receiver().mPostCode<<endl;
        cout<<"State:"<<packagg[i]->receiver().mState<<endl;
        cout<<"addresser:"<<endl;
        cout<<"address:"<<packagg[i]->addresser().mAddress<<endl;
        cout<<"city:"<<packagg[i]->addresser().mCity<<endl;
        cout<<"Name:"<<packagg[i]->addresser().mName<<endl;
        cout<<"PostCode:"<<packagg[i]->addresser().mPostCode<<endl;
        cout<<"State:"<<packagg[i]->addresser().mState<<endl;

    }

}
