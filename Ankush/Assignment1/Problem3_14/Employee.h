//
// Created by ankush on 8/30/22.
//

//
// Employee class definition. This file presents Employee's public
// interface without revealing the implementations of Employee's member
// functions, which are defined in Employee.cpp.

#include<string>
using namespace std;
// Employee class definition

class Employee
{
public:
    Employee( string, string, int); // constructor that initializes First Name,
    // last name and salary
    void setFirstName( string ); // function that sets first name
    string getFirstName(); //function that gets the first name
    void setLastName( string ); // function that sets last name
    string getLastName(); //function that gets the last name
    void setSalary( int ); // function that sets Salary
    int getSalary(); //function that gets the Salary
    //int getSalaryHike(); // function that returns the new salary after hike

private:
    string firstName; // First Name
    string lastName; // Last Name
    int initSalary; // Salary initial
};
