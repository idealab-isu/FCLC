#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int num1;


string odd_even(int num1) // Recognize the odd or even numbers
{
    string odd = {"The number is odd."};
    string even = {"The number is even."};

    if (num1%2==0)
    return even;
    else
    return odd;
}



int main()
{
    cout << "Please enter an integer" << endl;
    cin >> num1;
    cout << odd_even(num1) << endl;

}