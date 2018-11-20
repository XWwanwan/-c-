
#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;


GradeBook::GradeBook( string name )
{
   setCourseName( name );
   ACount = 0;
   BCount = 0;
   CCount = 0;
   DCount = 0;
   FCount = 0;
}

void GradeBook::setCourseName( string name )
{
   if ( name.length() <= 25 )
      courseName = name;
   else
   {
      courseName = name.substr( 0, 25 );
      cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
         << "Limiting courseName to first 25 characters.\n" << endl;
   }
}


string GradeBook::getCourseName()
{
   return courseName;
}

void GradeBook::displayMessage()
{
   cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
      << endl;
}
void GradeBook::inputGrades()
{
   int grade;

   cout << "Enter the letter grades." << endl
      << "Enter the EOF character to end input." << endl;

   while ( ( grade = cin.get() ) != EOF )
   {
      switch ( grade )
      {
         case 'A':
         case 'a':
            ACount++;
            break;

         case 'B':
         case 'b':
            BCount++;
            break;

         case 'C':
         case 'c':
            CCount++;
            break;

         case 'D':
         case 'd':
            DCount++;
            break;

         case 'F':
         case 'f':
            FCount++;
            break;

         case '\n':
         case '\t':
         case ' ':
            break;

         default:
            cout << "Incorrect letter grade entered."
               << " Enter a new grade.\n";
            break;
      }
   }
}

void GradeBook::displayGradeReport()
{
   cout << "\n\nNumber of students who received each letter grade:"
      << "\nA: " << ACount
      << "\nB: " << BCount
      << "\nC: " << CCount
      << "\nD: " << DCount
      << "\nF: " << FCount
      << endl;

   int gradeCount = ACount + BCount + CCount + DCount + FCount;

   if ( gradeCount != 0 )
   {
      int gradeTotal = 4 * ACount + 3 * BCount + 2 * CCount + 1 * DCount;

      cout << fixed << setprecision( 1 );

      cout << "\nThe class average is: "
         << static_cast< double > ( gradeTotal ) / gradeCount
         << endl;
   }
}




