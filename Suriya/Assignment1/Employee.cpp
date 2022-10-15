//Exercise 3.14 - Class Source File
//ex3_14-Employee.cpp

#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;

Employee::Employee(string f_name, string l_name, int pay){
    setFirstName(f_name);
    setLastName(l_name);
    setSalary(pay);
}

void Employee::setFirstName(string f_name) {
    fname = f_name;
}

void Employee::setLastName(string l_name) {
    lname = l_name;
}

void Employee::setSalary(int pay) {
    if (pay>=0)
        salary = pay;
    if (pay<0){
        cout<<"Invalid value. Salary set to 0."<<endl;
        salary = 0;
    }
}

string Employee::getEmployeeName() {
    return fname+" "+lname;
}

int Employee::getEmployeeSalary() {
    return salary;
}

void Employee::displayAnnualSalary(){
    cout<<getEmployeeName()<<"'s annual salary is: $ "<<getEmployeeSalary()*12<<endl;
}

