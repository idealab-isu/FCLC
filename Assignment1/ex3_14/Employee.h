//Exercise 3.14 - Header File
//ex3_14-Employee.h

#include<string>
using namespace std;

class Employee{
    public:
        Employee(string, string, int);
        void setFirstName(string);
        void setLastName(string);
        void setSalary(int);
        string getEmployeeName();
        int getEmployeeSalary();
        void displayAnnualSalary();

    private:
        string fname, lname;
        int salary;
};