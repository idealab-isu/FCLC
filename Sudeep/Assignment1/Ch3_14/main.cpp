#include <iostream>
#include "Employee.h"


using namespace std;

int main() {
   Employee E1("Bill", "Gates", 10);
   Employee E2("Joe", "Young", 100);

   E1.setFirstName("Joe");
   cout <<"First name for E1 is " << E1.getFirstName() <<endl;
   E2.setLastName("Gates");
   cout << "Last name for E2 is " <<E2.getLastName() <<" and " << E2.getFirstName() <<" "
   <<E2.getLastName() <<" has a monthly salary of $" << E2.getMonthlySalary() << endl;


   cout <<"The yearly salary for the first Employee E1 is " <<E1.getMonthlySalary() * 12 <<endl;
   cout <<"The yearly salary for the second Employee E2 is " <<E2.getMonthlySalary() * 12 <<endl;

   E1.setMonthlySalary(E1.getMonthlySalary() + E1.getMonthlySalary() * 0.1);
   E2.setMonthlySalary(E2.getMonthlySalary() + E2.getMonthlySalary() * 0.1);
   cout <<"The yearly salary for the first Employee E1 after the raise is " << E1.getMonthlySalary() * 12 <<endl;
   cout <<"The yearly salary for the first Employee E2 after the raise is " << E2.getMonthlySalary() * 12 <<endl;


}
