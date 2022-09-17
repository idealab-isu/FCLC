//
// Created by smenon on 9/16/22.
//

#include <string> // class GradeBook uses C++ standard string class
using namespace std;
// GradeBook class definition
class GradeBook
{
public:
    GradeBook( string,string ); // constructor that initializes courseName
    void setCourseName( string ); // function that sets the course name
    string getCourseName(); // function that gets the course name
    void setInstructorName( string );
    string getInstructorName();
    void displayMessage(); // function that displays a welcome message
private:
    string courseName, instructorName; // course name for this GradeBook
}; // end class GradeBook