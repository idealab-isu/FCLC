//
// Created by ankush on 8/30/22.
//
// Date member-function definitions. This file contains
// implementations of the member functions prototyped in Date.h.
#include <iostream>
#include "Date.h" // include definition of class Date
using namespace std;
// constructor initializes month, day ,year
Date::Date( int inputMonth , int inputDay , int inputYear )
{
    setMonth( inputMonth ); // call set function to initialize First name
    setDay( inputDay ); // call set function to initialize Last name
    setYear( inputYear ); // call set function to initialize initial salary
} // end Date constructor
// function to set the Month
void Date::setMonth(int inputMonth)
{
    if (inputMonth >= 1 && inputMonth <= 12)
    {
        month = inputMonth; // store the month in the object
    }
    else
    {
        month = 1;
    }
} // end function setMonth
// function to get the month
int Date::getMonth()
{
    return month; // return object's Month
} // end function getMonth
// function to set the Day
void Date::setDay(int inputDay)
{
    day = inputDay; // store the day in the object
} // end function setDay
// function to get the day
int Date::getDay()
{
    return day; // return object's Day
} // end function getDay
// function to set the Year
void Date::setYear(int inputYear)
{
    year = inputYear; // store the year in the object
} // end function setYear
// function to get the year
int Date::getYear()
{
    return year; // return object's Year
} // end function getYear
void Date::displayDate()
{
    cout << "The Date is: "<<getMonth() << "/" << getDay() << "/" <<getYear() <<endl;
} // end function displayDate


