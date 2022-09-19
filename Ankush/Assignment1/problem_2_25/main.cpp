#include <iostream>
using namespace std; // program uses names from the std namespace

int main() {

    int number1; // number for checking
    int number2; // number for checking

    cout << "Enter the integers: "; // prompt user for data
    cin >> number1 >> number2 ; // read two integers from user

    if ( number1 % number2 == 0)
        cout  <<"Integer 1 is a multiple of Integer 2" <<endl;
    else
        cout  <<"Integer 1 is not a multiple of Integer 2" <<endl;
}