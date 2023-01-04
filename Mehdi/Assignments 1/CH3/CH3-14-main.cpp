
#include <iostream>
#include "Employee.h" 
using namespace std;


int main()
{
	
	Employee employee1("John", "Smith", 4500);
	Employee employee2("Jason", "Walton", 5200);

	

	
	cout << "\nInformation of Employee 1:";
	cout << "\nFirst Name: " << employee1.get_first();
	cout << "\nLast Name: " << employee1.get_last();
	cout << "\nMonthly Salary: " << employee1.get_salary();

	employee1.set_salary(1.1 * employee1.get_salary());

	cout << "\n\nInformation of Employee 1 Updated:";
	cout << "\nFirst Name: " << employee1.get_first(); 
	cout << "\nLast Name: " << employee1.get_last();
	cout << "\nMonthly Salary: " << employee1.get_salary();


	cout << "\n\nInformation of Employee 2:";
	cout << "\nFirst Name: " << employee2.get_first(); 
	cout << "\nLast Name: " << employee2.get_last();
	cout << "\nMonthly Salary: " << employee2.get_salary();

	employee2.set_salary(1.1 * employee2.get_salary());

	cout << "\n\nInformation of Employee 2 Updated:";
	cout << "\nFirst Name: " << employee2.get_first(); 
	cout << "\nLast Name: " << employee2.get_last();
	cout << "\nMonthly Salary: " << employee2.get_salary() << endl << endl;

	} // end main