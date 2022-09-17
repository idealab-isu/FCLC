//
// Created by smenon on 9/16/22.
//

#include <string>

using namespace std;

class Employee{
public:
    Employee(string, string, int);
    void setFirstName(string first_name);
    void setLastName(string last_name);
    void setMonthlySalary(int m_salary);
    string getFirstName();
    string getLastName();
    int getMonthlySalary();

private:
    string FirstName;
    string LastName;
    int MonthlySalary;


};