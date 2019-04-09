#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include <iostream>
using namespace std;

struct Personal_Data
{
    string  Name;
    string  Address;
    string  City;
    string  State;
    unsigned int PostCode;
};




class Package
{
public:
    Package(const Personal_Data &MySender,
            const Personal_Data &MyAddressee,
            double               weight,
            double               unitPrice);

    virtual double calculateCost();

    Personal_Data getMySender() const;
    void          setSender(const Personal_Data &MySender);

    Personal_Data getMyAddressee() const;
    void          setAddressee(const Personal_Data &MyAddressee);

    double getMyWeight() const;
    void   setWeight(double Myweight);

    double getMyUnitPrice() const;
    void   setUnitPrice(double MyUnitPrice);


private:
    Personal_Data Sender;
    Personal_Data Addressee;
    double  Weight;
    double Unit_Price;




};


class TwoDayPackage : public Package
{

public:
    TwoDayPackage(const Personal_Data &MySender,
                  const Personal_Data &MyAddressee,
                  double               weight,
                  double               unitPrice,
                  double               DayCost);
     double calculateCost();
     double  getMyDayPrice() const;
     void   setDayPrice(double MyDayPrice);

private:
    double Day_Price;

};

class OverNightPackage:public Package
{
public:
    OverNightPackage(const Personal_Data &MySender,
                     const Personal_Data &MyAddress,
                     double               weight,
                     double               unitPrice,
                     double               NightCost);
    double calculataCost();
    double getMyNightPrice()const;
    void setNightPrice(double MyNightPrice);

private:
   double Night_Price;


};

//class OverNightPackage : public Package
//{

//public:
//     OverNightPackage(const Personal_Data &MySender,
//                      const Personal_Data &MyAddressee,
//                      double               weight,
//                      double               unitPrice,
//                      double               NightPrice);
//     double calculateCost();
//     double getMyNightPrice() const;
//     void   setNightPrice(double MyNightPrice);

//private:
//    double Night_Price;

//};

#endif // PACKAGE_H
