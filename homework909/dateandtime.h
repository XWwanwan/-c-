#ifndef DATEANDTIME_H
#define DATEANDTIME_H


class DateAndTime
{
public:
    DateAndTime();
    DateAndTime(
        int m, int d, int y, int hr, int min, int sec );
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
   void print();
   void setDate( int, int, int );
   void setMonth( int );
   void setDay( int );
   void setYear( int );
   int getMonth();
   int getDay();
   int getYear();
   void nextDay();
private:
   int hour;
   int minute;
   int second;
   int month;
   int day;
   int year;
   bool leapYear();
   int monthDays();
};

#endif // DATEANDTIME_H
