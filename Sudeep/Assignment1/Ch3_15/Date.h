//
// Created by smenon on 9/16/22.
//

#include <string>

using namespace std;

class Date{
public:
    Date(int, int, int);
    int getDay();
    int getMonth();
    int getYear();

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    void displayDate();


private:
    int _day;
    int _month;
    int _year;
};