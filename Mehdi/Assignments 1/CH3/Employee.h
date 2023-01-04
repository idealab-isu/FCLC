#pragma once
#include <string> 
using namespace std;


class Employee
{
public:
	Employee(string, string, int); 
	void set_first(string); 
	void set_last(string); 
	void set_salary(int); 

	string get_first(); 
	string get_last(); 
	int get_salary(); 
private:
	string first_name; 
	string last_name;
	int salary;
	}; 
