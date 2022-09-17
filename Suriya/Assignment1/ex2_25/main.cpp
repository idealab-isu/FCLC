//Exercise 2.25
//ex2_25-main.cpp

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if (a%b == 0)
        cout << a <<" is a multiple of "<< b <<endl;
    if (a%b != 0)
        cout << a <<" is not a multiple of "<< b <<endl;
}
