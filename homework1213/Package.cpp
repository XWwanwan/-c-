#include "Package.h"

Package::Package(const PersonContact &addresser,
                 const PersonContact &receiver,
                 double               weight,
                 double               unitCost)
    : mAddresser(addresser)
    , mReceiver(receiver)
{
    setWeight(weight);
    setUnitCost(unitCost);
}

double Package::calculateCost()
{
    return mWeight * mUnitCost;
}

PersonContact Package::addresser() const
{
    return mAddresser;
}

void Package::setAddresser(const PersonContact &addresser)
{
    mAddresser = addresser;
}

PersonContact Package::receiver() const
{
    return mReceiver;
}

void Package::setReceiver(const PersonContact &receiver)
{
    mReceiver = receiver;
}

double Package::weight() const
{
    return mWeight;
}

void Package::setWeight(double weight)
{
    mWeight = ((weight < 0) ? 0 : weight);
}

double Package::unitCost() const
{
    return mUnitCost;
}

void Package::setUnitCost(double unitCost)
{
    mUnitCost = ((unitCost < 0) ? 0 : unitCost);
}

OvernightPackage::OvernightPackage(const PersonContact &addresser,
                                   const PersonContact &receiver,
                                   double               weight,
                                   double               unitCost,
                                   double               overnightCost)
    : Package(addresser, receiver, weight, unitCost)
{
    setOvernightCost(overnightCost);
}

double OvernightPackage::calculateCost()
{
    double newUnitCost = unitCost() + mOvernightCost;
    return newUnitCost * weight();
}

double OvernightPackage::overnightCost() const
{
    return mOvernightCost;
}

void OvernightPackage::setOvernightCost(double overnightCost)
{
    mOvernightCost = ((overnightCost < 0) ? 0 : overnightCost);
}

TwoDayPackage::TwoDayPackage(const PersonContact &addresser,
                             const PersonContact &receiver,
                             double               weight,
                             double               unitCost,
                             double               twoDayCost)
    : Package(addresser, receiver, weight, unitCost)
{
    setTwoDayCost(twoDayCost);
}

double TwoDayPackage::calculateCost()
{
    // double base = unitCost() * weight();
    double base = Package::calculateCost();
    return base + mTwoDayCost;
}

double TwoDayPackage::twoDayCost() const
{
    return mTwoDayCost;
}

void TwoDayPackage::setTwoDayCost(double twoDayCost)
{
    mTwoDayCost = ((twoDayCost < 0) ? 0 : twoDayCost);
}
