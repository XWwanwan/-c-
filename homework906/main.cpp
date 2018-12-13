#include <iostream>
#include<rational.h>
using namespace std;
int main()
{
    Rational c,d,x;
 c.denominator=3;
 c.numerator=4;
 d.denominator=6;
 c.numerator=9;

 c.printRational();
 cout << " + ";
 d.printRational();
 x = c.add( d );

 cout << " = ";
 x.printRational();
 cout << '\n';
 x.printRational();
 cout << " = ";
 x.print_double();
 cout << "\n\n";

 c.printRational();
 cout << " - ";
 d.printRational();
 x = c.subtract( d );

 cout << " = ";
 x.printRational();
 cout << '\n';
 x.printRational();
 cout << " = ";
 x.print_double();
 cout << "\n\n";

 c.printRational();
 cout << " x ";
 d.printRational();
 x = c.multiplical(d );

 cout << " = ";
 x.printRational();
 cout << '\n';
 x.printRational();
 cout << " = ";
 x.print_double();
 cout << "\n\n";

 c.printRational();
 cout << " / ";
 d.printRational();
 x = c.division( d );
 cout << " = ";
 x.printRational();
 cout << '\n';
 x.printRational();
 cout << " = ";
 x.print_double();
 cout << endl;

   return 0;
}
