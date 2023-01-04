#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// function main begins program execution
int main()
{
	// create two GradeBook objects
	GradeBook gradeBook1("CS101 Introduction to C++ Programming", "John");
	GradeBook gradeBook2("CS102 Data Structures in C++", "John");

		// display initial value of courseName for each GradeBook
gradeBook1.displayMessage();

cout << "\ngradeBook1 created for course: " << gradeBook1.getCourseName() << "  Instructor: " << gradeBook1.getInstructorName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << "  Instructor: " << gradeBook1.getInstructorName()
		<< endl;
	} // end main