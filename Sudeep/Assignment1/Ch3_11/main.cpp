
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;
// function main begins program execution
int main()
{
// create two GradeBook objects
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming", "R R" );
    GradeBook gradeBook2( "CS102 Data Structures in C++", "S S");
// display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
} // end main