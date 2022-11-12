//Exercise 3.11 - Header File
//ex3_11-GradeBook.h

#include <string>
using namespace std;

class GradeBook
{
    public:
        GradeBook( string, string );
        void setCourseName( string );
        void setCourseInstr( string );
        string getCourseName();
        string getCourseInstr();
        void displayMessage();

    private:
        string courseName,courseInstr;
};
