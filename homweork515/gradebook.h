#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<string>
#include "gradebook.h"

using namespace std;

class GradeBook
{
public:
   GradeBook( string );
   void setCourseName( string );
   string getCourseName();
   void displayMessage();
   void inputGrades();
   void displayGradeReport();
private:
   string courseName;
   int ACount;
   int BCount;
   int CCount;
   int DCount;
   int FCount;
};
#endif // GRADEBOOK_H
