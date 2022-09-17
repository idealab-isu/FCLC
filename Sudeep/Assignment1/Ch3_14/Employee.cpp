//
// Created by smenon on 9/16/22.
//

#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string first_name, string last_name, int monthly_salary) {
    FirstName = first_name;
    LastName = last_name;
    MonthlySalary = monthly_salary;
}

void Employee::setFirstName(string first_name) {
    FirstName = first_name;
}

void Employee::setLastName(string last_name) {
    LastName = last_name;
}

void Employee::setMonthlySalary(int m_salary) {
    if (m_salary >= 0){
        MonthlySalary = m_salary;
    }else{
        MonthlySalary = 0;
    }

}

string Employee::getFirstName() {
    return FirstName;
}

string Employee::getLastName() {
    return LastName;
}

int Employee::getMonthlySalary() {
    return MonthlySalary;
}





















