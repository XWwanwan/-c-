#include<iostream>
#include<Package.h>
#include<vector>
using namespace std;

int main()
{
    vector<Package*> packagg;
    for(size_t i=0;i<packagg.size();i++)
    {
        cout<<"the"<<i+1<<"th package :"<<packagg[i]->calculateCost();
        cout<<"receiver:"<<endl;
        cout<<"address:"<<packagg[i]->Package::receiver().mAddress<<endl;
        cout<<"city:"<<packagg[i]->Package::receiver().mCity<<endl;
        cout<<"Name:"<<packagg[i]->Package::receiver().mName<<endl;
        cout<<"PostCode:"<<packagg[i]->Package::receiver().mPostCode<<endl;
        cout<<"State:"<<packagg[i]->Package::receiver().mState<<endl;
        cout<<"addresser:"<<endl;
        cout<<"address:"<<packagg[i]->Package::addresser().mAddress<<endl;
        cout<<"city:"<<packagg[i]->Package::addresser().mCity<<endl;
        cout<<"Name:"<<packagg[i]->Package::addresser().mName<<endl;
        cout<<"PostCode:"<<packagg[i]->Package::addresser().mPostCode<<endl;
        cout<<"State:"<<packagg[i]->Package::addresser().mState<<endl;

    }

}
