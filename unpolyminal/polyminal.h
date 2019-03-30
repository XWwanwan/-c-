#ifndef POLYMINAL_H
#define POLYMINAL_H
#include <iostream>
using namespace std;

class polyminal
{
public:


    void Input_Polyminal();
    void Output_Polyminal();
    polyminal operator+(const polyminal&);
    polyminal operator-(const polyminal&);
    polyminal operator*(const polyminal&);
    polyminal operator=(const polyminal&);
    polyminal operator+=(const polyminal&);
    polyminal operator*=(const polyminal&);
    polyminal operator-=(const polyminal&);



private:

    double  *coe;
    int index;
};

#endif // POLYMINAL_H
