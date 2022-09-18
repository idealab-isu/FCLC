#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

float mile = 0;
float gallon;
float temp1, temp2, MPG, total_MPG;


int main()
{
	temp1 = 0;
	temp2 = 0;
	mile = 0;
	gallon = 0;
	while (temp1 != - 1)
	{
		cout << "\nEnter miles driven (-1 to quit): ";
		cin >> temp1;
		if (temp1 != -1)
		{
			cout << "Enter gallons used: ";
			cin >> temp2;
			cout << "MPG this trip: " << (temp1 / temp2);
			mile += temp1;
			gallon += temp2;
			cout << "\nTotal MPG: " << (mile / gallon) << endl << endl;
		}

	}

}