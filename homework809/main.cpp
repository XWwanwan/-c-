#include <QCoreApplication>
#include<iostream>
using namespace std;
int main()
{
    long values1=200000;
    long values2;
    long *longPtr=&values1;

    values2=*longPtr;
    cout<<values2<<endl;
    cout<<longPtr<<endl;

}
