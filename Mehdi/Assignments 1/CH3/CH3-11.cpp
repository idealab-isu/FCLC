

#include <iostream>
#include "GradeBook.h"
using namespace std;


GradeBook::GradeBook(string name, string instrctor)
{
	setCourseName(name); 
	setInstructorName(instrctor); 
} 

void GradeBook::setCourseName(string name)
 {
	 courseName = name;
	 } 

 
void GradeBook::setInstructorName(string instructor)
{
	instructorName = instructor; 
} 

 
string GradeBook::getCourseName()
{
	 return courseName; 
	 } 


string GradeBook::getInstructorName()
{
	return instructorName; 
} 


void GradeBook::displayMessage()
 {
	
		 cout << "Welcome to the grade book for\n" << getCourseName()
			 << "\nThis course is presented by: "<< getInstructorName()
		 << "!" << endl;
	 } 