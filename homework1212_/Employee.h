#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"Date.h"
#include <string> // C++ standard string class

class Employee
{
public:
   Employee( const std::string &, const std::string &,
      const std::string & );
   virtual ~Employee() { } // virtual destructor

   void setFirstName( const std::string & ); // set first name
   std::string getFirstName() const; // return first name

   void setLastName( const std::string & ); // set last name
   std::string getLastName() const; // return last name

   void setSocialSecurityNumber( const std::string & ); // set SSN
   std::string getSocialSecurityNumber() const; // return SSN

   // pure virtual function makes Employee abstract base class
   virtual double earnings() const = 0; // pure virtual
   virtual void print() const; // virtual
private:
   std::string firstName;
   std::string lastName;
   std::string socialSecurityNumber;
}; // end class Employee
class CommissionEmployee : public Employee
{
public:
   CommissionEmployee( const std::string &, const std::string &,
      const std::string &, double = 0.0, double = 0.0 );
   virtual ~CommissionEmployee() { } // virtual destructor

   void setCommissionRate( double ); // set commission rate
   double getCommissionRate() const; // return commission rate

   void setGrossSales( double ); // set gross sales amount
   double getGrossSales() const; // return gross sales amount

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override; // print object
private:
   double grossSales; // gross weekly sales
   double commissionRate; // commission percentage
}; // end class CommissionEmployee

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const std::string &, const std::string &,
      const std::string &, double = 0.0, double = 0.0, double = 0.0 );
   virtual ~BasePlusCommissionEmployee() { } // virtual destructor

   void setBaseSalary( double ); // set base salary
   double getBaseSalary() const; // return base salary

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override; // print object
private:
   double baseSalary; // base salary per week
}; // end class BasePlusCommissionEmployee
class EmployeePlus:public BasePlusCommissionEmployee
{

public:
   EmployeePlus();
   virtual double earnings() const = 0;
   virtual void print() const;
   void setBirthday(Date day);
   Date getBirthday();

private:
    Date birthDay;


};


#endif // EMPLOYEE_H
