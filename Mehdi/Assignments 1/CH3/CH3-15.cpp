#include <iostream>
#include "Date.h" 
using namespace std;


Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	if (m < 1 || m > 12)
		month = 1;
	}





void Date::set_year(int y)
 {
	year = y; 
	 } 

void Date::set_month(int m)
{
	month = m;
	if (m < 1 || m > 12)
		month = 1; 
} 

void Date::set_day(int d)
{
	day = d; 
} 




int Date::get_year()
{
	return year;
} 

int Date::get_month()
{
	return month; 
} 

int Date::get_day()
{
	return day; 
} 


string Date::displayDate()
{
	return (to_string(month)+"/"+to_string(day)+"/"+ to_string(year));
} 

