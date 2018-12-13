#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;


class Rational
{
public:
    Rational();
    int numerator ; // sets numerator
    int denominator ; // sets denominator
    Rational add( const Rational &a );

    Rational subtract( const Rational &s );


    Rational multiplical( const Rational &m );

    Rational division( const Rational &v );

    void printRational ();
    void print_double() ;


    void reduction();

};

#endif // RATIONAL_H
