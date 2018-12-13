#ifndef TIME_H
#define TIME_H


class TTime
{

   
    public:
      TTime( int = 0, int = 0, int = 0 ); 
       
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
    


#endif // TIME_H
