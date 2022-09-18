#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

// Function to convert binary to decimal
int decimal_equivalent(int n)
{
	int num = n;
	int equivalent = 0;
	int base = 1;
	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;
		equivalent += last_digit * base;
		base = base * 2;
	}

	return equivalent;
}

int num;

int main()
{
	cout << "Input an integer in 1's and 0's: ";
	cin >> num;
	cout << "Decimal equivalent of the binary number is: " <<  decimal_equivalent(num) << endl;
}