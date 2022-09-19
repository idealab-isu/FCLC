//
// Created by ankush on 8/30/22.
//
// Employee member-function definitions. This file contains
// implementations of the member functions prototyped in Employee.h.
#include <iostream>
#include "Employee.h" // include definition of class Employee
using namespace std;
// constructor initializes first name, last name and initial salary
Employee::Employee( string fname, string lname , int isalary )
{
    setFirstName( fname ); // call set function to initialize First name
    setLastName( lname ); // call set function to initialize Last name
    setSalary( isalary ); // call set function to initialize initial salary
} // end Employee constructor
// function to set the first name
void Employee::setFirstName( string fname )
{
   firstName = fname; // store the first name in the object
} // end function setFirstName
// function to get the first name
string Employee::getFirstName()
{
    return firstName; // return object's firstName
} // end function getFirstName
// function  to set last name
void Employee::setLastName(std::string lname)
{
    lastName = lname; // store the last name in the object
} // end function setLastName
// function to get last name
string Employee::getLastName()
{
    return lastName; // return object's lastName
} // end function getLastName
// function to set the Monthly Salary
void Employee::setSalary( int isalary)
{
    if ( isalary >= 0 )
    {
        initSalary = isalary; // store the monthly salary
    }
    if ( isalary < 0 )   // If the monthly salary is negative, set to 0
    {
        initSalary = 0; // store the monthly salary
    }
} // end function monthly salary
// function to get the monthly salary
int Employee::getSalary()
{
    return initSalary; // return object's initSalary
} // end function getSalary


