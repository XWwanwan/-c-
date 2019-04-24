#include"Employee.h"
#include<vector>
#include<iostream>
#include<ctime>
#include"Date.h"
using namespace std;
int main()
{

    //time_t now = time(0);
    Date dd;
    dd.setDate(11,11,1999);



      CommissionEmployee P1("li","xiao","al",12,12);
      BasePlusCommissionEmployee P2("xiao","xi","time",1,2,3);
      EmployeePlus P3("zz","xi","time",1,2,3,dd);

   vector<Employee *> Employ_VEC(3);//
   Employ_VEC[0]=&P1;
   Employ_VEC[1]=&P2;
   Employ_VEC[2]=&P3;


   for(size_t i=0;i<Employ_VEC.size();i++)
   {
Employ_VEC[i]->print();
   }
}
