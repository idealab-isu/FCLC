//
// Created by ankush on 8/30/22.
//

//
// Date class definition. This file presents Date's public
// interface without revealing the implementations of Date's member
// functions, which are defined in Date.cpp.

#include<string>
using namespace std;
// Date class definition

class Date
{
public:
    Date( int, int, int); // constructor that initializes First Name,
    // last name and salary
    void setMonth( int ); // function that sets month
    int getMonth(); //function that gets the month
    void setDay( int ); // function that sets day
    int getDay(); //function that gets the Day
    void setYear( int ); // function that sets Year
    int getYear(); // function that gets Year
    void displayDate(); //function that displays data

private:
    int month; // Month
    int day; // Day
    int year; // Year
};
