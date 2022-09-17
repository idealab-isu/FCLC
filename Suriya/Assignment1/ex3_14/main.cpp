//Exercise 3.14 - Main File
//ex3_14-main.cpp


#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee employee1("Sheldon","Cooper",72000), employee2("Leonard","Hofstader",-70000);
    cout << "Employee record created for: " << employee1.getEmployeeName()
         <<"\nEmployee record created for: " << employee2.getEmployeeName()<< "\n"<<endl;
    employee2.setSalary(70000);
    cout << "New salary set for employee 2.\n"<<endl;
    employee1.displayAnnualSalary();
    employee2.displayAnnualSalary();
    cout<<"\nProgram initiated for 10% increment in salary\n"<<endl;
    employee1.setSalary(1.1*employee1.getEmployeeSalary());
    employee2.setSalary(1.1*employee1.getEmployeeSalary());
    employee1.displayAnnualSalary();
    employee2.displayAnnualSalary();
}
