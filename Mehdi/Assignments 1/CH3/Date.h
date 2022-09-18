#pragma once

#include <string> 
using namespace std;


class Date
{
public:
	Date(int, int, int); 
	void set_year(int);
	void set_month(int); 
	void set_day(int); 

	int get_year();
	int get_month(); 
	int get_day(); 
	string displayDate();
private:
	int year;
	int month;
	int day;
	string date; 
	}; 
