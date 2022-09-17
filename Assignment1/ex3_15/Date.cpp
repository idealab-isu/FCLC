//Exercise 3.15 - Class Source File
//ex3_15-Date.cpp

#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int month1, int day1, int year1) {
    setDay(day1);
    setMonth(month1);
    setYear(year1);
}

void Date::setDay(int day1) {
    day = day1;
}

void Date::setMonth(int month1) {
    if (month1<1 || month1>12){
        month = 1;
        cout<<"Invalid month input. Month set to January"<<endl;
    }
    if (month1>=1 && month1<=12)
        month = month1;
}

void Date::setYear(int year1) {
    year = year1;
}

void Date::displayDate() {
    cout<<"Recorded date is: "<<month<<"/"<<day<<"/"<<year<<endl;
}