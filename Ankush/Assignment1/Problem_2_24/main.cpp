#include <iostream>
using namespace std; // program uses names from the std namespace

int main() {

    int number; // number for checking

    cout << "Enter the integer: "; // prompt user for data
    cin >> number ; // read two integers from user

    if ( number % 2 == 0)
        cout  <<"The integer is even" <<endl;
    else
        cout  <<"The integer is odd" <<endl;
}
