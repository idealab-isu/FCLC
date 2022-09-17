//Exercise 3.15 - Header File
//ex3_15-Date.h

#include <string>
using namespace std;

class Date{
    public:
        Date(int, int, int);
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void displayDate();

    private:
        int day,month,year;
};