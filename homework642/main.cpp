#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1,double x2,double y1,double y2)
{
    double result=sqrt((pow((x1-x2),2)+pow((y1-y2),2)));
    return result;

}
