#ifndef INVOICE_H
#define INVOICE_H
#include<QString>


class invoice
{
public:

    Invoice(QString type,QString present,int number,double price);

    void set(QString type,QString present,int number,double price);

    int get_number();

    QString get_type();

    QString get_present();

    double get_price();

    double getInvoiceAmount();

    void displaymessage();



    private:
       QString Type;
       QString Present;
       int Number;
       double Price;
    };



#endif // INVOICE_H
