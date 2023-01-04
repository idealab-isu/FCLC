#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;


string encrypt(int n)
{
	int num = n;
	int digit1 = n / 1000;
	num = num % 1000;
	int digit2 = num / 100;
	num = num % 100;
	int digit3 = num / 10;
	num = num % 10;
	int digit4 = num;

	//cout << digit3 << endl;
	digit1 = (digit1 + 7) % 10;
	digit2 = (digit2 + 7) % 10;
	digit3 = (digit3 + 7) % 10;
	digit4 = (digit4 + 7) % 10;

	string product = to_string(digit3) + to_string(digit4) + to_string(digit1) + to_string(digit2);
	return product;
}

int decrypt(string n)
{
	int digit1 = (int(n[0]) - 48 + 3) % 10;
	int digit2 = (int(n[1]) - 48 + 3) % 10;
	int digit3 = (int(n[2]) - 48 + 3) % 10;
	int digit4 = (int(n[3]) - 48 + 3) % 10;

	int product = (digit3 * 1000) + (digit4 * 100) + (digit1 * 10) + digit2;
	return product;
}


int num;
float x;

int main()
{
	cout << "Input an integer: ";
	cin >> num;
	cout << "Encrypted number is: " << encrypt(num) << endl;
	cout << "Decrypted number is: " << decrypt(encrypt(num)) << endl;



}