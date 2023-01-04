
#include <iostream>
#include "Date.h" 
using namespace std;


int main()
{
	
	Date test(2022, 9, 15);

	
	cout << "\nTest1:";
	cout << "\nYear: " << test.get_year();
	cout << "\nMonth: " << test.get_month();
	cout << "\nDay: " << test.get_day();
	cout << "\nDate: " << test.displayDate();

	test.set_year(2020);
	test.set_month(5);
	test.set_day(18);

	cout << "\n\nTest2:";
	cout << "\nYear: " << test.get_year(); 
	cout << "\nMonth: " << test.get_month();
	cout << "\nDay: " << test.get_day();
	cout << "\nDate: " << test.displayDate() << endl << endl;



	} // end main