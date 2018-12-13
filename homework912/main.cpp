#include<iostream>
using namespace std;
class Rectangle
{  private:
    float lenth;
    float width;
    Rectangle()
    {
      lenth=1;
      width=1;
    }
    bool check(float lenth,float width)
    {
        bool tt=false;
        if(lenth>0&&lenth<20&&width>0&&width<20)
            tt=true;
        return tt;
    }
public:
    float perimeter(float lenth,float width)
    {
        float tt=2*(lenth+width);
        return tt;
    }
    float area(float lenth,float width)
    {
        float tt=lenth*width;
        return tt;
    }

};
