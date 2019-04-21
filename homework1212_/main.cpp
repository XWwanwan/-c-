#include"Employee.h"
#include<vector>
#include<iostream>
using namespace std;
int main()
{
   vector<EmployeePlus> Employ_VEC;
   int month;
   for(size_t i=0;i<Employ_VEC.size();i++)
   {
       Date birthmonth = Employ_VEC[i].getBirthday();
       if(month==birthmonth.getMonth())
       {
           Employ_VEC[i].print();
       }
       else
       {
           Employ_VEC[i].BasePlusCommissionEmployee::print();
       }
   }
}
