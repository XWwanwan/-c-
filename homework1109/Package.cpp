#include "Package.h"

Package::Package()
{

    Sender      = "";
    Addressee   = "";
    City        = "";
    State       = "";
    Postal_Code = "";
    Weight      = 1 ;
    Unit_Price  = 1 ;
}

double Package::calculateCost() const
{
    return Weight*Unit_Price;
}

TwoDayPackage:: TwoDayPackage(double price)

{
    Day_Price = price;
}
double TwoDayPackage::calculateCost()const
{
    return  Day_Price+Weight*Unit_Price;
}
 OverNightPackage::OverNightPackage(double price)
 {
     Unit_Price = Unit_Price + price/Weight;
 }

 double OverNightPackage::calculateCost()
 {
     return  Weight*Unit_Price;
 }
