#include <QCoreApplication>
#include <Package.h>
#include <iostream>
using namespace std;

int main()
{
    Package Pack1;
    TwoDayPackage Pack2(3);
    OverNightPackage Pack3(5);
    double Cost1 = Pack1.calculateCost();
    double Cost2 = Pack2.calculateCost();
    double Cost3 = Pack3.calculateCost();
    cout<<"Cost1:"<<Cost1<<endl;
    cout<<"Cost2:"<<Cost2<<endl;
    cout<<"Cost3:"<<Cost3<<endl;


}
