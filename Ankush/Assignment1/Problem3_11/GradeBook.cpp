//
// Created by ankush on 8/29/22.
//
// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;
// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name, string instructor )
{
    setCourseName( name ); // call set function to initialize courseName
    setInstructorName( instructor ); // call set function to initialize courseName
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
// function to set the instructor name
void GradeBook::setInstructorName( string instructor )
{
    instructorName = instructor; // store the course name in the object
} // end function setCourseName
// function to get the course name
string GradeBook::getInstructorName()
{
    return instructorName; // return object's courseName
} // end function getCourseName
// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
// call getCourseName to get the courseName
    cout << "The course is presented by:\n" << getInstructorName()
         << "!" << endl;
} // end function displayMessage