//Exercise 3.11 - Main File
//ex3_11-main.cpp

#include <iostream>
#include "GradeBook.h"

using namespace std;

int main()
{
    GradeBook gradeBook1( "M E 666 Finite Element Methods", "James Rossmanith" );
    GradeBook gradeBook2( "M E 546 Computational Fluid Dynamics I", "Paul Durbin" );
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        <<"\ngradeBook2 created for course: " << gradeBook2.getCourseName()<< "\n"<<endl;
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
}
