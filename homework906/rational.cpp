

#include "rational.h"

Rational::Rational()
{

}
Rational Rational::add( const Rational &a )
{
   Rational t; // creates Rational object

   t.numerator = a.numerator * denominator;
   t.numerator += a.denominator * numerator;
   t.denominator = a.denominator * denominator;
   t.reduction(); // store the fraction in reduced form
   return t;
} // end function addition

Rational Rational::subtract( const Rational &s )
{
   Rational t; // creates Rational object

   t.numerator = s.denominator * numerator;
   t.numerator -= denominator * s.numerator;
   t.denominator = s.denominator * denominator;
   t.reduction(); // store the fraction in reduced form
   return t;
} // end function subtraction

Rational Rational::multiplical( const Rational &m )
{
   Rational t; // creates Rational object

   t.numerator = m.numerator * numerator;
   t.denominator = m.denominator * denominator;
   t.reduction(); // store the fraction in reduced form
   return t;
} // end function multiplication

Rational Rational::division( const Rational &v )
{
   Rational t; // creates Rational object

   t.numerator = v.denominator * numerator;
   t.denominator = denominator * v.numerator;
   t.reduction(); // store the fraction in reduced form
   return t;
} // end function division

void Rational::printRational ()
{
   if ( denominator == 0 ) // validates denominator
      cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
   else if ( numerator == 0 ) // validates numerator
      cout << 0;
   else
      cout << numerator << '/' << denominator;
}

void Rational::reduction()
{
   int largest;
   largest = numerator > denominator ? numerator : denominator;

   int gcd = 0;

   for ( int loop = 2; loop <= largest; loop++ )

       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

   if (gcd != 0)
   {
      numerator /= gcd;
      denominator /= gcd;
   } // end if
}
void Rational::print_double()
{
   cout << static_cast< double >( numerator ) / denominator;
}
