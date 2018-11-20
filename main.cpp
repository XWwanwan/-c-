#include <iostream>
#include<QString>
#include"invoice.h"
using namespace std;


int main()
{
    QString a="lsdjm";
    QString b="jdv";
    int c=2;
    double d=4.0;
   invoice product;
   product.Invoice(a,b,c,d);
    product.displaymessage();
}
