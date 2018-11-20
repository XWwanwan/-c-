#include "invoice.h"
#include<QString>
#include<iostream>
using namespace std;

    invoice::Invoice(QString type,QString present,int number,double price)
    {
        if (number<0)
            Number=0;
        else
            Number=number;
        if (price<0)
            Price=0;
        else
            Price=price;
        Type=type;
        Present=present;

    }
   void invoice::set(QString type,QString present,int number,double price)
   {
       Type=type;
       Present=present;
       Number=number;
       Price=price;
   }
   int invoice::get_number()
   {
      return Number;
   }
   QString invoice::get_type()
   {
       return Type;
   }
   QString invoice::get_present()
   {
       return Present;
   }
   double invoice::get_price()
   {
       return Price;
   }
   double invoice::getInvoiceAmount()
   {
       return Number*Price;
   }
   void invoice::displaymessage()
   {

       int number=get_number();
       double price=get_price();
       double sum=getInvoiceAmount();

       cout<<"Number:"<<number<<endl;
       cout<<"Price:"<<price<<endl;
       cout<<"sum up is:"<<sum<<endl;
   }

