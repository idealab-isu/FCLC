#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int num, digit1, digit2, digit3, digit4, digit5;


int main()
{
	cout << "Enter a five-digit number: ";
	cin >> num;

	digit1 = num / 10000;
	num = num % 10000;
	digit2= num / 1000;
	num = num % 1000;
	digit3= num / 100;
	num = num % 100;
	digit4= num / 10;
	num = num % 10;
	digit5= num;

	if (digit1 == digit5 && digit2 == digit4)
		cout << "\nThe number is palindrome." << endl;
	else
		cout << "\nThe number is not palindrome." << endl;


}