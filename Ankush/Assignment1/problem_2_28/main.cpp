#include <iostream>
using namespace std; // program uses names from the std namespace
int main() {
    int number; // number for checking
    int a;
    int b;
    int c;
    int d;
    int e;

    cout << "Enter the integers: "; // prompt user for data
    cin >> number; // read two integers from user

    a = (number/10000)%10;
    b = (number/1000)%10;
    c = (number/100)%10;
    d = (number/10)%10;
    e = (number/1)%10;

    cout << a << "   "<< b << "   " << c << "   "<< d << "   " << e <<endl;
}
