#ifndef TIME_H
#define TIME_H


class TTime
{


    public:
      TTime( int = 0, int = 0, int = 0 );

      bool setTime( int, int, int );
      bool setHour( int );
      bool setMinute( int );
      bool setSecond( int );
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


#endif // TIME_H
