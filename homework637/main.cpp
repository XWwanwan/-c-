#include <iostream>
using namespace std;


int main()
{
  int a;
  cin>>a;
  int a1=1;
  int a2=1;
  for(i=0;i<a;i++)
  {
      cou<<a1<<" "<<a2<<enl;

      int temp=a1;
      a1=a2;
      a2+=temp;

  }
  return 0;
}
