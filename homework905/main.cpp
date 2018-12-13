#include<iostream>
using namespace std;
class plural
{ public:
    double real_part;
    double imaginary_part;
    plural()
    {
      real_part=0;
      imaginary_part=0;
    }

};
class jisuan
{
public:
    plural addition(plural a,plural b)
    {
       plural x;
       x.real_part=a.real_part+b.real_part;
       x.imaginary_part=a.imaginary_part+b.imaginary_part;
       cout<<x.real_part<<"+"<<x.imaginary_part<<"i"<<endl;
       return x;
    }
    plural minus(plural a,plural b)
    {
       plural x;
       x.real_part=a.real_part-b.real_part;
       x.imaginary_part=a.imaginary_part-b.imaginary_part;
       cout<<x.real_part<<"+"<<x.imaginary_part<<"i"<<endl;
       return x;
    }
    plural mutiplication(plural a,plural b)
    {
       plural x;
       x.real_part=a.real_part*b.real_part-a.imaginary_part*b.imaginary_part;
       x.imaginary_part=a.real_part*b.imaginary_part+a.imaginary_part*b.real_part;

       cout<<x.real_part<<"+"<<x.imaginary_part<<"i"<<endl;
       return x;
    }
    plural divison(plural a,plural b)
    {
       plural x;
       x.real_part=(a.real_part*b.real_part+a.imaginary_part*b.imaginary_part)/(b.real_part*b.real_part+b.imaginary_part*b.imaginary_part);
       x.imaginary_part=(-a.real_part*b.imaginary_part+a.imaginary_part*b.real_part)/(b.real_part*b.real_part+b.imaginary_part*b.imaginary_part);
       cout<<x.real_part<<"+"<<x.imaginary_part<<"i"<<endl;
       return x;
    }


};
int main()
{
    jisuan aa;
    plural a,b;
    a.real_part=1;
    a.imaginary_part=1;
    b.imaginary_part=-1;
    b.real_part=1;
    plural z=aa.addition(a,b);
    z=aa.minus(a,b);
    z=aa.mutiplication(a,b);
    z=aa.divison(a,b);
    return 0;
}
