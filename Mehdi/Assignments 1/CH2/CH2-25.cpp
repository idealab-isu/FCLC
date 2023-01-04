#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int num1, num2;


string multiple(int num1, int num2) {
    string multiple = {"The first number is a multiple of the second number."};
    string not_multiple = {"The first number is not a multiple of the second number."};

    if (num1%num2==0)
    return multiple;
    else
    return not_multiple;
}

int main()
{
    cout << "Please enter the first number" << endl;
    cin >> num1;
    cout << "Please enter the second number" << endl;
    cin >> num2;
    cout << multiple(num1, num2) << endl;
}