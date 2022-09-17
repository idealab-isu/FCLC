//
// Created by smenon on 9/16/22.
//

#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;
// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name, string instname )
{
    setCourseName( name ); // call set function to initialize courseName
    setInstructorName( instname );
} // end GradeBook constructor
// function to set the course name
void GradeBook::setCourseName( string name )
{
    courseName = name; // store the course name in the object
} // end function setCourseName
// function to get the course name
string GradeBook::getCourseName()
{
    return courseName; // return object's courseName
} // end function getCourseName
void GradeBook::setInstructorName( string instname){
    instructorName = instname;
}

string GradeBook::getInstructorName() {
    return instructorName;
}


// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
// call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
         << "!" << endl;
    cout << "This course is presented by\n Prof. " << getInstructorName()
         << "!" << endl;
} // end function displayMessage