#include<iostream>
#include<array>
using namespace std;
int main()
{
array< int ,6>alphabet={1,2,3,4,5,6};
cout<<alphabet[5];
//(a)
float c;
cin>>c;
array<float,4> grades;
grades[3]=c;
//(b)
array< int ,5>values={8,8,8,8,8};
//(c)

const size_t arraysize=100;
array<float,arraysize> count;

for( size_t i=0;i<count.size();i++)
{
    count[i]=i+1;

}
float result=0;
for(size_t j=0;j<count.size();j++)
{
    result+=count[j];
}
cout<<"sum ="<<result<<endl;

//(d)
array<double,11>a={1,2,3,45,5,66,78,6,79,33,45};
array<double,34>b;
for(size_t i=0;i<11;i++)

{
    b[i]=a[i];
}
//(c)
array<float,99> w;
float max,min;
max=w[0];
min=w[0];
for(size_t j=0;j<99;j++)
{
    if(max<w[j])
    {
        max=w[j];
    }
    if(min>w[j])
    {
        min=w[j];
    }
}
return 0;

}
