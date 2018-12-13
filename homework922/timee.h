#ifndef TIMEE_H
#define TIMEE_H

#include<ctime>
#include<iostream>
#include<iomanip>
class timee
{

public:
          timee(  );

           void set_Time( int, int, int );
           void set_Hour( int );
           void set_Minute( int );
           void set_Second( int );
           int get_Hour();
           int get_Minute();
           int get_Second();

           void tick();
           void printUniversal();
           void printStandard();
        private:
           int hour;
           int minute;
           int second;

};

#endif // TIMEE_H
