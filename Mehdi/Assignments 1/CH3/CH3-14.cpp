#include <iostream>
#include "Employee.h" 
using namespace std;


Employee::Employee(string first, string last, int s)
{
	first_name = first;
	last_name = last;
	salary = s;
	if (s < 0)
		salary = 0;
	}	





void Employee::set_first(string first)
 {
	first_name = first;
	 } 

void Employee::set_last(string last)
{
	last_name = last;
} 

void Employee::set_salary(int s)
{
	salary = s; 
	if (s < 0)
		salary = 0;
} 




string Employee::get_first()
{
	return first_name; 
}

string Employee::get_last()
{
	return last_name; 
}


int Employee::get_salary()
{
	return salary; 
} 