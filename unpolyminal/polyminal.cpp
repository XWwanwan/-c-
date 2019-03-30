#include "polyminal.h"

void polyminal::Input_Polyminal()
{


    cout<<"请输入多项式指数index:";
        cin>>index;
        coe=new double [index+1];
        cout<<"请从高到低输入多项式系数:";
        for(int i=index;i>=0;i--)
            cin>>coe[i];
}
void polyminal::Output_Polyminal()
{
    for(int i=index;i>=0;i--)
    {
        if(i==index)
        {
            if(coe[i]==1)
                cout<<"x^"<<i;
            else if(coe[i]==-1)
                cout<<"-x^"<<i;
            else
                cout<<coe[i]<<"x^"<<i;
        }
        else if(i==1)
        {
            if(coe[i]==0)
                continue;
            else if(coe[i]>0)
                cout<<"+"<<coe[i]<<"x";
            else if(coe[i]<0)
                cout<<"-"<<(-coe[i])<<"x";
        }
        else if(i==0)
        {
            if(coe[i]==0)
                cout<<endl;
            else if(coe[i]>0)
                cout<<"+"<<coe[i]<<endl;
            else if(coe[i]<0)
                cout<<"-"<<(-coe[i])<<endl;
        }
        else if(i>0&&i<index)
        {
            if(coe[i]==0)
                continue;
            else if(coe[i]==1)
                cout<<"+x^"<<i;
            else if(coe[i]==-1)
                cout<<"-x^"<<i;
            else if(coe[i]>0)
                cout<<"+"<<coe[i]<<"x^"<<i;
            else if(coe[i]<0)
                cout<<"-"<<(-coe[i])<<"x^"<<i;
        }

    }
}


polyminal polyminal::operator+(const polyminal &rhs)

{
    polyminal reslut;
    int Maxindex=index>rhs.index?index:rhs.index;
    int Minindex=index<rhs.index?index:rhs.index;
    reslut.index=Maxindex;
    reslut.coe=new double[reslut.index+1];
    if(rhs.index==Maxindex)
    {
        for(int i=0;i<rhs.index+1;i++)
            reslut.coe[i]=rhs.coe[i];
    }
    else{
        for(int i=0;i<index+1;i++)
            reslut.coe[i]=coe[i];
    }
    for(int i=0;i<Minindex+1;i++)
        reslut.coe[i]=coe[i]+rhs.coe[i];
    return reslut;
}


polyminal polyminal::operator+=(const polyminal &rhs)

{
    polyminal sum;
    int Maxindex=index>rhs.index?index:rhs.index;
    int Minindex=index<rhs.index?index:rhs.index;
    sum.index=Maxindex;
    sum.coe=new double[sum.index+1];
    if(rhs.index==Maxindex)
    {
        for(int i=0;i<rhs.index+1;i++)
            sum.coe[i]=rhs.coe[i];
    }
    else{
        for(int i=0;i<index+1;i++)
            sum.coe[i]=coe[i];
    }
    for(int i=0;i<Minindex+1;i++)
        sum.coe[i]=coe[i]+rhs.coe[i];
    return sum;
}


polyminal polyminal::operator-(const polyminal &rhs){
    polyminal sub;
    int Maxindex=index>rhs.index?index:rhs.index;
    int Minindex=index<rhs.index?index:rhs.index;
    sub.index=Maxindex;
    sub.coe=new double[sub.index+1];
    if(rhs.index==Maxindex)
    {
        for(int i=0;i<Maxindex+1;i++)
            sub.coe[i]=rhs.coe[i];
    }
    else{
        for(int i=0;i<Maxindex+1;i++)
            sub.coe[i]=coe[i];
    }
    for(int i=0;i<Minindex+1;i++)
        sub.coe[i]=coe[i]-rhs.coe[i];
    return sub;

}


polyminal polyminal::operator=(const polyminal &rhs)
{
    polyminal sub;
    int dex=rhs.index;

    sub.index=dex;
    sub.coe=new double[sub.index+1];

    for(int i=0;i<dex+1;i++)
        sub.coe[i]=rhs.coe[i];
    return sub;

}

polyminal polyminal::operator-=(const polyminal &rhs){
    polyminal sub;
    int Maxindex=index>rhs.index?index:rhs.index;
    int Minindex=index<rhs.index?index:rhs.index;
    sub.index=Maxindex;
    sub.coe=new double[sub.index+1];
    if(rhs.index==Maxindex)
    {
        for(int i=0;i<Maxindex+1;i++)
            sub.coe[i]=rhs.coe[i];
    }
    else{
        for(int i=0;i<Maxindex+1;i++)
            sub.coe[i]=coe[i];
    }
    for(int i=0;i<Minindex+1;i++)
        sub.coe[i]=coe[i]-rhs.coe[i];
    return sub;

}

polyminal polyminal::operator*(const polyminal &rhs)

{
    polyminal reslut;
    int Maxindex=index>rhs.index?index:rhs.index;
    int Minindex=index<rhs.index?index:rhs.index;
    reslut.index=Maxindex;
    reslut.coe=new double[reslut.index+1];
    if(rhs.index==Maxindex)
    {
        for(int i=0;i<rhs.index+1;i++)
            reslut.coe[i]=rhs.coe[i];
    }
    else{
        for(int i=0;i<index+1;i++)
            reslut.coe[i]=coe[i];
    }
    for(int i=0;i<Minindex+1;i++)
        reslut.coe[i]=coe[i]+rhs.coe[i];
    return reslut;
}
