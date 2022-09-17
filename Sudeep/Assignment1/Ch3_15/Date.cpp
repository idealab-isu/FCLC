//
// Created by smenon on 9/16/22.
//

#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year) {
    _day = day;
    if (month >= 1 && month <= 12){
        _month = month;
    } else{
        _month = 1;
    }
    _year = year;

}

int Date::getDay() {
    return _day;
}

int Date::getMonth() {
    return _month;
}
int Date::getYear() {
    return _year;
}

void Date::setDay(int day){
    _day = day;
}

void Date::setMonth(int month){
    _month= month;
}

void Date::setYear(int year) {
    _year = year;
}

void Date::displayDate() {
    cout <<_month <<"/" << _day << "/" << _year;
}


















