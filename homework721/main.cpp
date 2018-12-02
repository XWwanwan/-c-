#include <iostream>
#include<array>
using namespace std;
int main()
{

array<array<int,4>,5>sales;
cout<<"    "<<"1"<<"    "<<"2"<<"    "<<"3"<<"    "<<"4"<<"    "<<endl;

cout<<"    "<<sales[0][0]<<"    "<<sales[0][1]<<"    "<<sales[0][2]<<"    "<<sales[0][3]<<"    "<<endl;
cout<<"    "<<sales[1][0]<<"    "<<sales[1][1]<<"    "<<sales[1][2]<<"    "<<sales[1][3]<<"    "<<endl;
cout<<"    "<<sales[2][0]<<"    "<<sales[2][1]<<"    "<<sales[2][2]<<"    "<<sales[2][3]<<"    "<<endl;
cout<<"    "<<sales[3][0]<<"    "<<sales[3][1]<<"    "<<sales[3][2]<<"    "<<sales[3][3]<<"    "<<endl;
cout<<"    "<<sales[4][0]<<"    "<<sales[4][1]<<"    "<<sales[4][2]<<"    "<<sales[4][3]<<"    "<<endl;

return 0;
}
