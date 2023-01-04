#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;


int factorial(int n)
{
	int num = n;
	float product = num;
	while (num != 1) {
		num += -1;
		product *= (num);
	}
	return product;
}

float calc_e(int n)
{
	int num = n;
	int counter = 1;
	float product = 1;
	while (num != 1) {
		num -= 1;
		product += 1.0 / (factorial(num));
	}
	return product;
}


float calc_ex(float x, int n)
{
	int num = n;
	int counter = 1;
	float product = 1;
	while (num != 1) {
		num -= 1;
		product += pow(x, num) / (factorial(num));
	}
	return product;
}

int num;
float x;

int main()
{
	cout << "Input an integer for sec. (a): ";
	cin >> num;
	cout << "Factorial n is: " << factorial(num) << endl;

	cout << "Input number of terms to calculate e for sec. (b): ";
	cin >> num;
	cout << "e is: " << calc_e(num) << endl;

	cout << "Input number of terms to calculate e^x for sec. (c): ";
	cin >> num;
	cout << "Input x to calculate e^x for sec. (c): ";
	cin >> x;
	cout << "e^x is: " << calc_ex(x, num) << endl;



}