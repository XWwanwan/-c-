#include<iostream>
#include<cstdlib>
using namespace std;
unsigned int rollDice()
{
    unsigned int del1=1+rand()%6;
    unsigned int del2=1+rand()%6;
    unsigned int sum=del1+del2;


    cout<<"player rolled "<<del1<<"+"<<del2<<"="<<sum<<endl;
    return sum;
}

bool game()
{
    bool check=false;
    enum Status{CONTINUTE,WON,LOST};
    srand (static_cast<unsigned int >(time(0)));
     unsigned int my_point=0;
     Status gameStatus= CONTINUTE;
     unsigned int sumdice=rollDice();
     int a=rand()%5;
     if(a==4)
     {
         cout<<"oh ,broke ?"<<endl;
     }
     if(a==1)
     {
         cout<<"you are up big"<<endl;
     }
     if(a==3)
     {
         cout<<"come! take a  chance"<<endl;
     }
     switch(sumdice)
     {
     case 7:
     case 11:
         gameStatus=WON;
         break;
     case 2:
     case 3:
     case 12:

         gameStatus=LOST;
         break;
     default:
         gameStatus= CONTINUTE;
         my_point=sumdice;
         cout<<"my pont is:"<<my_point<<endl;
         break;

     }
     while(CONTINUTE==gameStatus)


     {
         sumdice=rollDice();
         if( my_point=sumdice)
         {
              gameStatus=WON;
         }
         else if(sumdice==7)
         {
             gameStatus=LOST;
         }

     }
     if(gameStatus==WON)
     {
         cout<<" won"<<endl;
         check=true;
     }

     else  cout<<"lost"<<endl;


     return check;
}
int main()
{
    double bankbalance=1000;
    double wager=-1;
    while(wager<=0&&wager>1000)
    {
    cin>>wager;
    }
    bool check;
    check=game();
    if(check)
    {
        bankbalance+=wager;
    }
    else bankbalance-=wager;
    cout<<bankbalance<<endl;
    return 0;
}
