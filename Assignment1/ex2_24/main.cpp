//Exercise 2.24
//ex2_24-main.cpp

#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    if (a%2 == 0)
        cout << a <<" is even"<<endl;
    if (a%2 != 0)
        cout << a <<" is odd"<<endl;
}
