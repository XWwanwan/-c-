#ifndef PACKAGE_H
#define PACKAGE_H
#include<QString>


class Package
{
public:
    Package();


protected:
    QString Sender;
    QString Addressee;
    QString Address;
    QString City;
    QString State;
    QString Postal_Code;
    double  Weight;
    double Unit_Price;

public:
    double calculateCost()const;


};


class TwoDayPackage : public Package
{

public:
    TwoDayPackage(double price);
     double calculateCost()const;

private:
    double Day_Price;

};

class OverNightPackage : public Package
{

public:
     OverNightPackage(double price);
     double calculateCost();

private:
    double Night_Price;

};

#endif // PACKAGE_H
