//Exercise 3.11 - Class Source File
//ex3_11-GradeBook.cpp

#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook( string name, string instr ) {
    setCourseName( name );
    setCourseInstr( instr );
}

void GradeBook::setCourseName( string name ) {
    courseName = name;
}

void GradeBook::setCourseInstr( string instr) {
    courseInstr = instr;
}

string GradeBook::getCourseName() {
    return courseName;
}

string GradeBook::getCourseInstr() {
    return courseInstr;
}

void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << "This course is presented by: " << getCourseInstr() << ".\n" <<endl;
}