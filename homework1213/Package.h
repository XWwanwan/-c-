#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

struct PersonContact
{
    std::string  mName;
    std::string  mAddress;
    std::string  mCity;
    std::string  mState;
    unsigned int mPostCode;
};

class Package
{
public:
    Package(const PersonContact &addresser,
            const PersonContact &receiver,
            double               weight,
            double               unitCost);

    virtual double calculateCost();

    PersonContact addresser() const;
    void          setAddresser(const PersonContact &addresser);

    PersonContact receiver() const;
    void          setReceiver(const PersonContact &receiver);

    double weight() const;
    void   setWeight(double weight);

    double unitCost() const;
    void   setUnitCost(double unitCost);

private:
    PersonContact mAddresser;
    PersonContact mReceiver;
    double        mWeight;
    double        mUnitCost;
};

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const PersonContact &addresser,
                  const PersonContact &receiver,
                  double               weight,
                  double               unitCost,
                  double               twoDayCost);

    double calculateCost() override;

    double twoDayCost() const;
    void   setTwoDayCost(double twoDayCost);

private:
    double mTwoDayCost;
};

class OvernightPackage : public Package
{
public:
    OvernightPackage(const PersonContact &addresser,
                     const PersonContact &receiver,
                     double               weight,
                     double               unitCost,
                     double               overnightCost);

    double calculateCost() override;

    double overnightCost() const;
    void   setOvernightCost(double overnightCost);

private:
    double mOvernightCost;
};

#endif   // PACKAGE_H
