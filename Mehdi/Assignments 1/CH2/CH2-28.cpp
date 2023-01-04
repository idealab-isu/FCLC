#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int num;


int main()
{
    cout << "Enter a five-digit number: ";
    cin >> num;

	// split digits
    cout << num / 10000 << "   ";
    num = num % 10000;
    cout << num / 1000 << "   ";
    num = num % 1000;
    cout << num / 100 << "   ";
    num = num % 100;
    cout << num / 10 << "   ";
    num = num % 10;
    cout << num << endl;

}