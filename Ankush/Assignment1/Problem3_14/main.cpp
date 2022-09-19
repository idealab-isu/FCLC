#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    // create two Employee objects
    int yearly_salary1;
    int yearly_salary2;
    int hiked_salary1;
    int hiked_salary2;
    Employee employee1( "Ram" , "Das  ", 10000);
    Employee employee2( "Laxman" , "Prasad", 5000);
    yearly_salary1 = 12*employee1.getSalary(); // finding yearly salary for first employee
    yearly_salary2 = 12*employee2.getSalary(); // finding yearly salary for second employee
    hiked_salary1 = 1.1*yearly_salary1; // Salary after hike of 10 %
    hiked_salary2 = 1.1*yearly_salary2; // Salary after hike of 10 %

    cout << "The monthly and yearly salary for "<< employee1.getFirstName() << " "
    << employee1.getLastName() <<" is " << employee1.getSalary()
    << " and " << yearly_salary1 << " respectively."
    << " The salary after 10 % hike is: " << hiked_salary1 <<endl;

    cout << "The monthly and yearly salary for "<< employee2.getFirstName() << " "
          << employee2.getLastName() <<" is " << employee2.getSalary()
          << " and " << yearly_salary2 << " respectively."
          << " The salary after 10 % hike is: " << hiked_salary2 <<endl;


} // end main