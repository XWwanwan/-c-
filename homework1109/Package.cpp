#include "Package.h"

Package::Package(const Personal_Data &MySender,
                 const Personal_Data &MyAddressee,
                 double               weight,
                 double               unitPrice):
                 Sender(MySender),Addressee(MyAddressee),Weight(weight),Unit_Price(unitPrice)
{

}

double Package::calculateCost()
{
    return Weight*Unit_Price;
}

Personal_Data Package::getMyAddressee() const
{
    return Addressee;
}

void Package::setAddressee(const Personal_Data &MyAddressee)
{
    Addressee = MyAddressee;
}

Personal_Data Package::getMySender() const
{
    return Sender;
}

void Package::setSender(const Personal_Data &MySender)
{
    Sender = MySender;
}

double Package::getMyWeight() const
{
    return Weight;
}

void Package::setWeight(double MyWeight)
{
    Weight = ((MyWeight < 0) ? 0 : MyWeight);
}

double Package::getMyUnitPrice() const
{
    return Unit_Price;
}

void Package::setUnitPrice(double MyUnitPrice)
{
    Unit_Price = ((MyUnitPrice < 0) ? 0 : MyUnitPrice);
}
TwoDayPackage::TwoDayPackage(const Personal_Data &MySender,
                             const Personal_Data &MyAddressee,
                             double               weight,
                             double               unitPrice,
                             double               DayCost)
    :Package(MySender,MyAddressee, weight,unitPrice)
{
    setDayPrice(DayCost);

}



double TwoDayPackage::calculateCost()
{
    double newUnitCost = getMyUnitPrice() + Day_Price;
    return newUnitCost * getMyWeight();
}


double TwoDayPackage::getMyDayPrice() const
{
    return Day_Price;
}
void   TwoDayPackage::setDayPrice(double MyDayPrice)
{
    Day_Price = MyDayPrice;
}

OverNightPackage::OverNightPackage(const Personal_Data &MySender,
                                   const Personal_Data &MyAddress,
                                   double               weight,
                                   double               unitPrice,
                                   double               NightCost)
    :Package (MySender,MyAddress,weight,unitPrice)
{
    setNightPrice(NightCost);
}


void OverNightPackage::setNightPrice(double MyNightPrice)
{
    Night_Price = MyNightPrice;
}

double OverNightPackage::getMyNightPrice()const
{
    return  Night_Price;
}

double OverNightPackage::calculataCost()
{

    double newUnitCost = Package::calculateCost() + Night_Price;
    return newUnitCost * Package::getMyWeight();
}
//double OvernightPackage::overnightCost() const
//{
//    return mOvernightCost;
//}

//void OvernightPackage::setOvernightCost(double overnightCost)
//{
//    mOvernightCost = ((overnightCost < 0) ? 0 : overnightCost);
//}

//TwoDayPackage::TwoDayPackage(const PersonContact &addresser,
//                             const PersonContact &receiver,
//                             double               weight,
//                             double               unitCost,
//                             double               twoDayCost)
//    : Package(addresser, receiver, weight, unitCost)
//{
//    setTwoDayCost(twoDayCost);
//}

//double TwoDayPackage::calculateCost()
//{
//    // double base = unitCost() * weight();
//    double base = Package::calculateCost();
//    return base + mTwoDayCost;
//}

//double TwoDayPackage::twoDayCost() const
//{
//    return mTwoDayCost;
//}

//void TwoDayPackage::setTwoDayCost(double twoDayCost)
//{
//    mTwoDayCost = ((twoDayCost < 0) ? 0 : twoDayCost);
//}
